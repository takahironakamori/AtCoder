#include <bits/stdc++.h>
using namespace std;

int maze[3010][3010];
// dp[i][j][k]:(i,j) にいるときに、k 個アイテムを拾った場合の最大価値
long long dp[3010][3010][4];

int main() {

  int R, C, K;
  cin >> R >> C >> K;

  for (int i = 0; i < K; ++i){
    int r, c, v;
    cin >> r >> c >> v;
    maze[r - 1][c - 1] = v;
  }

  for (int i = 0; i < R; ++i) {
    for (int j = 0; j < C; ++j) {
      for (int k = 2; 0 <= k; --k) {
        dp[i][j][k+1] = max(dp[i][j][k+1], dp[i][j][k] + maze[i][j]);
      }
      for (int k = 0; k < 4; ++k) {
        dp[i+1][j][0] = max(dp[i+1][j][0], dp[i][j][k]);
        dp[i][j+1][k] = max(dp[i][j+1][k], dp[i][j][k]);
      }
    }
  }

  long long ans = 0;
  for (int k = 0; k < 4; ++k) {
    ans = max(ans, dp[R-1][C-1][k]);
  }
  cout << ans << endl;

  return 0;
}