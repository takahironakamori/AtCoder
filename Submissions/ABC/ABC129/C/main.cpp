#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, M;
  cin >> N >> M;

  vector<int> a(N+1);

  for (int i = 0; i < M; i++) {
    int i_;
    cin >> i_;
    a[i_] = 1;
  }

  vector<long> dp(N+1);

  long mod = 1000000007;
  
  dp[N] = 1;

  for (int i = N - 1; 0 <= i; i--) {
    if (a[i] == 1) {
      dp[i] = 0;
    } else {
      if (i == N - 1) {
        dp[i] = dp[N];
      } else if (N < i + 2) {
        dp[i] = (dp[i + 1] + dp[N]) % mod;
      } else {
        dp[i] = (dp[i + 1] + dp[i+2]) % mod;
      }
    }
  }

  cout << dp[0] << endl;

}