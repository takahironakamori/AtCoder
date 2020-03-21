#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  int answer = 0;

  vector<int> dp(100010);

  dp[0] = 0;

  for (int i = 1; i <= 100000; i++){
    dp[i] = 100010;
    int cost = 1;
    while (cost <= i) {
      dp[i] = min(dp[i], dp[i - cost] + 1);
      cost *= 6;
    }
    cost = 1;
    while (cost <= i) {
      dp[i] = min(dp[i], dp[i - cost] + 1);
      cost *= 9;
    }
  }

  cout << dp[N] << endl;

  return 0;

}
