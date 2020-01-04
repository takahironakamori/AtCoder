### Educational DP Contest / DP まとめコンテスト

# B - Frog 2

  [問題はこちら](https://atcoder.jp/contests/dp/tasks/dp_b)


- 発想<br>
  h_1 から h_N までを 配列 h に入れる。<br>
  dp 用の配列を作って、大きな値で埋める。<br>
  dp\[1] = 0<br>
  dp\[i(2以上)] のときは、<br>
  min(dp\[i], abs(h\[i-j] - h\[i]) + dp\[i-j])<br>
  を j が 1 から K まで繰り返す。ただし、i - j が 1 以上のときに限る。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, K;
    cin >> N >> K;

    vector<int> h(N+1);

    for (int i = 1; i <= N; i++) {
      cin >> h[i];
    }

    int answer = 0;

    vector<int> dp(N+1);

    fill(dp.begin(), dp.end(), 1000000000);

    dp[1] = 0;

    for (int i = 2; i <= N; i++) {
      for (int j = 1; j <= K && 1 <= i - j; j++) {
        dp[i] = min(dp[i], abs(h[i - j] - h[i]) + dp[i - j]);
      }
    }

    cout << dp[N] << endl;

  }
  ```
    