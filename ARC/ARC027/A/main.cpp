#include <bits/stdc++.h>
using namespace std;

int main() {

  int h, m;
  cin >> h >> m;

  int hour = max(0, 17 - h);
  int minute = 60 - m;

  int ans = hour * 60 + minute;
  cout << ans << endl;

  return 0;

}
