### ABC017

# C - ハイスコア

  [問題はこちら](https://atcoder.jp/contests/abc017/tasks/abc017_3)

## 発想

  全体の合計得点から覆っている区間の合計得点を引く。<br>
  いもす法を使う。


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, M;
    cin >> N >> M;

    vector<int> l(N);
    vector<int> r(N);
    vector<int> s(N);
    long long sum = 0;
    for (int i = 0; i < N; i++) {
      cin >> l[i] >> r[i] >> s[i];
      sum += s[i];
    }

    vector<long long> dp(M + 2);
    long long result = 1LL<<60;

    dp[0] = 0;

    for (int i = 0; i < N; i++) {
      dp[l[i]] += s[i];
      dp[r[i] + 1] += 0 - s[i];
    }

    for (int i = 1; i < M + 1; i++) {
      dp[i] = dp[i - 1] + dp[i];
      result = min(result, dp[i]);
    }

    cout << sum - result << endl;

    return 0;

  }
  ```
