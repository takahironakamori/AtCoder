### Educational DP Contest / DP まとめコンテスト

# D - Knapsack 1

  [問題はこちら](https://atcoder.jp/contests/dp/tasks/dp_d)


- 発想<br>
  i 番目までの品物から重さの総和が j 以下になるように選んだときの価値の総和の最大値を入れる配列（dp）を作る。<br>
  j < w[i] の場合は dp[i + 1][j] = dp[i][j]<br>
  j >= w[i] の場合は dp[i + 1][j] = max(dp[i][j], dp[i][j - w[i]] + v[i])<br>
  となる。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, W;
    cin >> N >> W;

    vector<int> w(N + 1);
    vector<int> v(N + 1);
    for (int i = 0; i < N; i++) {
      cin >> w[i] >> v[i];
    }

    vector<vector<long long>> dp(N + 1, vector<long long>(W + 1));

    for (int i = 0; i < N; i++) {
      for (int j = 0; j <= W; j++) {
        if (j < w[i]) {
          dp[i + 1][j] = dp[i][j];
        } else {
          dp[i + 1][j] = max(dp[i][j], dp[i][j - w[i]] + v[i]);
        }
      }
    }

    cout << dp[N][W] << endl;

  }
  ```
