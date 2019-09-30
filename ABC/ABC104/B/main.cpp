#include <bits/stdc++.h>
using namespace std;

int main() {

  string S;
  cin >> S;

  string res = "AC";

  if ((int) S.at(0) != 65) {
    res = "WA";
  }

  int countC = 0;
  int positionC = 0;

  for (int i = 2; i < S.size() - 1; i++) {

    int s = (int) S.at(i);

    if (s == 67) {
      countC++;
      positionC = i;
    }

  }

  if (countC != 1) {
    res = "WA";
  }

  for (int i = 1; i < S.size(); i++) {

    int s = (int) S.at(i);

    if (i != positionC) {
      if (s < 97 || 122 < s) {
        res = "WA";
        break;
      }
    }

  }

  cout << res << endl;

}