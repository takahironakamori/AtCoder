#include <bits/stdc++.h>
using namespace std;

int main() {

  string s;
  cin >> s;

  int left = 0;
  int right = 0;

  for (int i = 0; i < s.size(); i++) {
    if (s[i] == 'A') {
      left = i;
      break;
    }
  }

  for (int i = s.size() - 1; 0 <= i; i--) {
    if (s[i] == 'Z') {
      right = s.size() - i;
      break;
    }
  }

  cout << s.size () - left - right + 1 << endl;

}