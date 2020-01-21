#include <bits/stdc++.h>
using namespace std;

int main() {

  string s, t;
  cin >> s >> t;

  vector<vector<int>> dp(s.size() + 1, vector<int>(t.size() + 1));

  dp[0][0] = 0;

  for (int i = 0; i < s.size(); i++) {
    for (int j = 0; j < t.size(); j++) {
      if (s[i] == t[j]) {
        dp[i + 1][j + 1] = dp[i][j]+1;
      } else {
        dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j]);
      }
    }
  }

  string answer = "";
  int i = s.size();
  int j = t.size();

  while (i && j) {
    if (dp[i][j] == dp[i - 1][j]) {
      i--;
    } else if (dp[i][j] == dp[i][j - 1]) {
      j--;
    } else {
      i--;
      j--;
      answer += s[i];
    }
  }

  reverse(answer.begin(), answer.end());
  cout << answer << endl;

}
