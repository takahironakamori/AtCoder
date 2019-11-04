#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<int> NG(301);
  for (int i = 0; i < 3; i++) {
    int v;
    cin >> v;
    NG[v] = 1;
  }

  vector<int> dp(N + 10);

  fill(dp.begin(), dp.end(), 10000000);

  if (NG[N] != 1) {
    dp[N] = 0;
  }

  for (int i = N - 1; 0 <= i; i--) {

    if (NG[i] == 1) {
      continue;
    }

    dp[i] = min(dp[i+3]+1, min(dp[i+2]+1, dp[i+1]+1));

  }

  if (dp[0] <= 100) {
    cout << "YES" << endl;
  } else{
    cout << "NO" << endl;
  }

}