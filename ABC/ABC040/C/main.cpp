#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<int> a(N);
  for (int i = 0; i < N; i++) {
    cin >> a[i];
  }

  long long answer = 0;

  vector<long long> dp(N+1);

  dp[0] = 0;
  dp[1] = abs(a[1] - a[0]);

  for (int i = 2; i < N; i++) {
    int a_ = dp[i - 2] + abs(a[i - 2] - a[i]);
    int b_ = dp[i - 1] + abs(a[i - 1] - a[i]);
    dp[i] = min(a_, b_);
  }

  cout << dp[N - 1] << endl;

  return 0;

}
