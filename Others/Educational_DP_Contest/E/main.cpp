#include <bits/stdc++.h>
using namespace std;

int main() {

  int INF = 1000000000;

  int N, W;
  cin >> N >> W;

  vector<int> w(N + 1);
  vector<int> v(N + 1);
  int V = 0;
  for (int i = 0; i < N; i++) {
    cin >> w[i] >> v[i];
    V = max(V, v[i]);
  }

  vector<vector<int>> dp(N + 1, vector<int>(N * V + 1));

  for (int i = 0; i < N; i++) {
    fill(dp[i].begin(), dp[i].end(), INF);
  }

  dp[0][0] = 0;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j <= N * V; j++) {
      if (j < v[i]) {
        dp[i + 1][j] = dp[i][j];
      } else {
        dp[i + 1][j] = min(dp[i][j], dp[i][j - v[i]] + w[i]);
      }
    }
  }

  int answer = 0;

  for (int i = 0; i <= N * V; i++) {
    if (dp[N][i] <= W) {
      answer = max(answer, i);
    }
  }

  cout << answer << endl;

}
