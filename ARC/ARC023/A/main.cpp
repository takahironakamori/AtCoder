#include <bits/stdc++.h>
using namespace std;

int f (int y, int m, int d) {
  int days = 365 * y + y / 4 - y / 100 + y / 400 + 306 * (m + 1) / 10 + d - 429;
  return days;
}

int main() {

  long long y, m, d;
  cin >> y >> m >> d;

  if (m == 1 || m == 2) {
    m += 12;
    y--;
  }

  cout << f(2014, 5, 17) - f(y, m, d) << endl;

  return 0;

}
