#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
// using mint = modint998244353;
// using mint = modint1000000007;
// const int mod = 1000000007;
// const ll INF = 1LL << 62;
const int INF = 1001001001;

// 15:45

int dp[310][310][310];

int main() {
  int N;
  cin >> N;
  int X, Y;
  cin >> X >> Y;
  vector<int> A(N);
  vector<int> B(N);
  rep(i, N) {
    cin >> A[i] >> B[i];
  }

  rep(i, 310) {
    rep(j, 310) {
      rep(k, 310) {
        dp[i][j][k] = INF;
      }
    }
  }

  dp[0][0][0] = 0;
  for(int i = 0; i < N; i++) {
    for(int x = 0; x <= 300; x++) {
      for(int y = 0; y <= 300; y++) {
        dp[i+1][x][y] = min(dp[i+1][x][y], dp[i][x][y]);
        int nx = A[i] + x;
        int ny = B[i] + y;
        if(X < nx) {
          nx = X;
        }
        if(Y < ny) {
          ny = Y;
        }
        dp[i+1][nx][ny] = min(dp[i+1][nx][ny], dp[i][x][y] + 1);
      }
    }
  }

  int ans = INF;
  ans = min(ans, dp[N][X][Y]);
  if(ans == INF) {
    ans = -1;
  }  
  cout << ans << endl;
  return 0;
}