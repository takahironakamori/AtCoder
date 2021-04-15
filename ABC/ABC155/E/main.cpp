#include <bits/stdc++.h>
using namespace std;


int main() {

  int INF = 1000000007;

  string S;
  cin >> S;
  
  reverse(S.begin(), S.end());
  S += '0';

  int N = S.size();
  
  /*
  dp[i][j]: 末尾から i 桁目まででくりさがりが j のときの最小値
  i: 0 から N
  j; 0(false) or 1(true)
  */
  vector<vector<int>> dp(N+1, vector<int>(2, INF));

  dp[0][0] = 0;

  for (int i = 0; i < N; ++i){
    for (int j = 0; j < 2; ++j) {
      // a - x = b
      int x = S[i] - '0';
      for (int a = 0; a < 10; ++a) {
        int nexti = i + 1;
        int nextj = 0;
        int b = a - j - x;
        if (b < 0) {
          nextj = 1;
          b += 10;
        }
        dp[nexti][nextj] = min(dp[nexti][nextj], dp[i][j]+a+b);
      }
    }
  }

  int ans = dp[N][0];
  cout << ans << endl;

  return 0;

}