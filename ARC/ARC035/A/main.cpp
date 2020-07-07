#include <bits/stdc++.h>
using namespace std;

int main() {

  string s;
  cin >> s;

  string r = s;
  reverse(r.begin(), r.end());

  string ans = "YES";
  for (int i = 0; i < s.size(); i++) {
    if (s[i] != '*' && r[i] != '*') {
      if (s[i] != r[i]) {
        ans = "NO";
        break;
      }
    }
  }

  cout << ans << endl;
  return 0;

}
