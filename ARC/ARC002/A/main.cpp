#include <bits/stdc++.h>
using namespace std;

int main() {

  int Y;
  cin >> Y;

  string ans = "NO";

  if (Y % 4 == 0) {
    if (Y % 100 == 0) {
      if (Y % 400 == 0) {
        ans = "YES";
      }
    } else {
      ans = "YES";
    }
  }

  cout << ans << endl;

  return 0;

}
