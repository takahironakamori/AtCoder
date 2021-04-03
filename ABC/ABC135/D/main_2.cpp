#include <bits/stdc++.h>
using namespace std;

const int mod = 1000000007;

int main() {
  
  string S;
  cin >> S;

  int N = 13;

  // dp[i]:= 13 で割ったあまりが i であるパターン数
  vector<long long> dp(N);
  dp[0] = 1;

  // 前から見ていく場合
  // ex: 1?2?3 0 -> 1 _> 1? -> 1?2 -> ...
  for (int i = 0; i < int(S.size()); ++i) {

    vector<long long> nextDP(N);

    if (S[i] == '?') {
      for (int j = 0; j < 10; ++j) {
        for (int k = 0; k < N; ++k) {
          nextDP[((k * 10) + j) % N] += dp[k];
          nextDP[((k * 10) + j) % N] %= mod;
        }
      }
    } else {
      int j = (S[i] - '0');
      for (int k = 0; k < N; ++k) {
          nextDP[((k * 10) + j) % N] += dp[k];
          nextDP[((k * 10) + j) % N] %= mod;
        }
    }
    dp = nextDP;

  }

  cout << dp[5] << endl;
  
  return 0;

}