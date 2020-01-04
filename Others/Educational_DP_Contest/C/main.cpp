#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<int> a(N+1);
  vector<int> b(N+1);
  vector<int> c(N+1);

  for (int i = 1; i <= N; i++) {
    cin >> a[i] >> b[i] >> c[i];
  }

  // dp[i][0]:a dp[i][1]:b dp[i][2]:c
  vector<vector<int>> dp(N+1,vector<int>(3));

  for (int i = 1; i <= N; i++) {
      dp[i][0] = max(dp[i - 1][1], dp[i - 1][2]) + a[i];
      dp[i][1] = max(dp[i - 1][0], dp[i - 1][2]) + b[i];
      dp[i][2] = max(dp[i - 1][0], dp[i - 1][1]) + c[i];
  }

  cout << max(dp[N][0], max(dp[N][1], dp[N][2])) << endl;

}