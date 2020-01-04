#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, K;
  cin >> N >> K;

  vector<int> h(N+1);

  for (int i = 1; i <= N; i++) {
    cin >> h[i];
  }

  vector<int> dp(N+1);

  fill(dp.begin(), dp.end(), 1000000000);

  dp[1] = 0;

  for (int i = 2; i <= N; i++) {
    for (int j = 1; j <= K && 1 <= i - j; j++) {
      dp[i] = min(dp[i], abs(h[i - j] - h[i]) + dp[i - j]);
    }
  }

  cout << dp[N] << endl;

}