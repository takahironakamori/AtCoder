#include <bits/stdc++.h>
using namespace std;

int main() {

  int X, Y;
  cin >> X >> Y;

  string ans = "No";

  for (int i = 0; i <= X; i++) {
    int tsuru = i * 2;
    int kame = (X - i) * 4;
    if ((tsuru + kame) == Y) {
      ans = "Yes";
      break;
    }
  }

  cout << ans << endl;

  return 0;

}
