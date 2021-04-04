#include <bits/stdc++.h>
using namespace std;

const int INF = 1000000001;

void chmin(int& x, int y){
  x = min(x,y);
}

int main() {

  int N;
  cin >> N;

  vector<int> X(N);
  vector<int> Y(N);
  vector<int> Z(N);

  for (int i = 0; i < N; ++i) {
    cin >> X[i] >> Y[i] >> Z[i];
  }

  int N2 = 1<<N;

  vector<vector<int>> dp(N2, vector<int>(N, INF));
  vector<vector<int>> dist(N, vector<int>(N));

  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < N; ++j) {
      int current = abs(X[i]-X[j]);
      current += abs(Y[i]-Y[j]);
      current += max(0, Z[j]-Z[i]);
      dist[i][j] = current;
    }
  }

  for (int i = 0; i < N; ++i) {
    if (i == 0) {
      continue;
    }
    dp[1<<i][i] = dist[0][i];
  }

  for (int i = 0; i < N2; ++i) {
    for (int j = 0; j < N; ++j) {
      if (~i>>j&1) {
        continue;
      }
      for (int k = 0; k < N; ++k) {
        if (i>>k&1) {
          continue;
        }
        chmin(dp[i|1<<k][k], dp[i][j] + dist[j][k]);
      }
    }
  }
  cout << dp[N2 - 1][0] << endl;
  return 0;

}