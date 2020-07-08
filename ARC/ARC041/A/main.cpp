#include <bits/stdc++.h>
using namespace std;

int main() {

  int x, y, k;
  cin >> x >> y >> k;

  if (y == k) {
    x = x + y;
  } else if (y < k) {
    x = x + y - (k - y);
  } else {
    x = x + k;
  }

  cout << x << endl;
  return 0;

}
