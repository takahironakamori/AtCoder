### ABC145

# E - All-you-can-eat

  [問題はこちら](https://atcoder.jp/contests/abc145/tasks/abc145_e)


## 発想


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;


  int main() {

    int N, T;
    cin >> N >> T;

    vector<pair<int,int>> p(N);
    for (int i = 0; i < N; ++i) {
      int A, B;
      cin >> A >> B;
      p[i] = make_pair(A, B);
    }

    sort(p.begin(), p.end());
    
    vector<vector<int>> dp(N+10, vector<int>(T+10));
    int ans = 0;
    for (int i = 0; i < N; ++i) {
      for (int j = 0; j < T; ++j) {
        dp[i+1][j] = max(dp[i+1][j], dp[i][j]);
        int time = j + p[i].first;
        if (time < T) {
          dp[i+1][time] = max(dp[i+1][time], dp[i][j] + p[i].second);
        }
      }
      int current = dp[i][T - 1] + p[i].second;
      ans = max(ans, current);
    }

    cout << ans << endl;
    return 0;

  }
  ```
