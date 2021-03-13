#include <bits/stdc++.h>
using namespace std;

int main() {

  string S;
  cin >> S;

  bool flg = true;

  for (int i = 0; i < S.size(); i++) {
    int s = (int) S.at(i);
    if (s < 48 || 57 < s) {
      flg = false;
      break;
    }
  }

  if (flg) {
    int ans = (S.at(0) - '0') * 100 + (S.at(1) - '0') * 10 + S.at(2) - '0';
    cout << ans * 2 << endl;
  } else {
    cout << "error" << endl;
  }

  return 0;

}