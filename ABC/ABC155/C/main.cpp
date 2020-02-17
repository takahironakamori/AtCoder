#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  map<string, int> mp;
  for (int i = 0; i < N; i++) {
    string s_;
    cin >> s_;
    mp[s_]++;
  }

  int mx = 0;
  for (auto item:mp) {
    mx = max(mx, item.second);
  }

  for (auto item:mp) {
    if (item.second == mx) {
      cout << item.first << endl;
    }
  }

  return 0;

}
