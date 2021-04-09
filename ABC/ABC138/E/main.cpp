#include <bits/stdc++.h>
using namespace std;

int main() {

  string s, t;
  cin >> s >> t;

  int n = int(s.size());
  int m = int(t.size());

  vector<vector<int>> abc(26);

  for (int i = 0; i < n; ++i) {
    abc[s[i]-'a'].push_back(i);
  }
  for (int i = 0; i < n; ++i) {
    abc[s[i]-'a'].push_back(i + n);
  }

  long long ans = 0;
  int count = 0;

  for (int i = 0; i < m; ++i) {
    int m2 = t[i]-'a';
    if (int(abc[m2].size()) == 0) {
      cout << -1 << endl;
      return 0;
    }
    count = *lower_bound(abc[m2].begin(), abc[m2].end(), count) + 1; 
    if (n <= count) {
      count -= n;
      ans += n;
    }
  }

  ans += count;
  cout << ans << endl;
  
  return 0;

}