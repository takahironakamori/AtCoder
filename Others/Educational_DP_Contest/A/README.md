### Educational DP Contest / DP まとめコンテスト

# A - Frog 1

  [問題はこちら](https://atcoder.jp/contests/dp/tasks/dp_a)


- 発想<br>
  h_1 から h_N までを 配列 h に入れる。<br>
  dp 用の配列を作る。<br>
  dp\[1] = 0<br>
  dp\[2] = abs(h\[1] - h\[2])<br>
  dp\[3以上] = min(abs(h\[i-2] - h\[i]) + dp\[i-2], abs(h\[i-1] - h\[i]) + dp\[i-1])
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    vector<int> h(N+1);

    for (int i = 1; i <= N; i++) {
      cin >> h[i];
    }

    int answer = 0;

    vector<int> dp(N+1);

    dp[1] = 0;
    dp[2] = abs(h[1] - h[2]);

    for (int i = 3; i <= N; i++) {
      dp[i] = min(abs(h[i - 2] - h[i]) + dp[i - 2], abs(h[i - 1] - h[i]) + dp[i - 1]);
    }

    cout << dp[N] << endl;

  }
  ```
    