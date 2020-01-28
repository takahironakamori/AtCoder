### ABC153

# E - Crested Ibis vs Monster

  [問題はこちら](https://atcoder.jp/contests/abc153/tasks/abc153_e)


- 発想<br>

  i 番目までの魔法からダメージの総和が j になるように選んだときの魔法消費量の総和の最小値でDPを行う。<br>
  <br>
  dp[0,0] の値は 0<br>
  【 条件：j が i 番目の魔法のダメージ以下の場合】<br>
  dp[i + 1, j] = dp[i, j] と A[i] で小さい方<br>
  【上記の条件を満たさない場合】
  dp[i + 1, j] = dp[i, j] と dp[i + 1, j - A[i]]＋ B[i]で小さい方<br>
  で dp[N][W] を出力する。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int H, N;
    cin >> H >> N;

    vector<int> A(N);
    vector<int> B(N);
    for (int i = 0; i < N; i++) {
      cin >> A[i] >> B[i];
    }

    // i 番目までの魔法からダメージの総和が j になるように選んだときの魔法消費量の総和の最小値
    vector<vector<int>> dp(N + 1, vector<int>(H + 1, 100000000));

    dp[0][0] = 0;

    for (int i = 0; i < N; i++) {
      for (int j = 0; j <= H; j++) {
        if (j <= A[i]) {
          dp[i+1][j] = min(dp[i][j], B[i]);
        } else {
          dp[i+1][j] = min(dp[i][j], dp[i+1][j - A[i]] + B[i]);
        }
      }
    }

    cout << dp[N][H] << endl;
  }
  ```
