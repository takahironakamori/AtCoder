#include <bits/stdc++.h>
using namespace std;


int main() {

  int N;
  cin >> N;

  vector<string> S(N);
  for (int i = 0; i < N; ++i) {
    cin >> S[i];
  }

  vector<vector<long long>> dp(N + 1, vector<long long>(2));

  dp[0][0] = 1;
  dp[0][1] = 1;

  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < 2; ++j) {
      for (int k = 0; k < 2; ++k) {
        if (S[i] == "AND") {
          dp[i + 1][j & k] += dp[i][j]; 
        } else {
          dp[i + 1][j | k] += dp[i][j];
        }
      }
    }
  }

  cout << dp[N][1] << endl;
  return 0;

}