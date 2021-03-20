#include <bits/stdc++.h>
using namespace std;

int main() {

  int S;
  cin >> S;

  int mod = 1000000007;

  vector<long long> dp(S+1);
  dp[0] = 1;  

  /*
  S = 3
  |           |
  | ○ | ○ | ○ |
  S = 4
  |               |
  | ○ | ○ | ○ | ○ |
  S = 5
  |                   |
  | ○ | ○ | ○ | ○ | ○ |
  S = 6
  |           |           |
  | ○ | ○ | ○ | ○ | ○ | ○ |
  S = 7
  |           \   \           |
  | ○ | ○ | ○ | ○ | ○ | ○ | ○ |
  S = 8
  |           \   \   \           |
  | ○ | ○ | ○ | ○ | ○ | ○ | ○ | ○ |
  */

  for (int i = 1; i <= S; ++i) {
    for (int j = 0; j <= i - 3; ++j){
      dp[i] += dp[j];
      dp[i] %= mod;
    }
  }

  cout << dp[S] << endl;

  return 0;

}
