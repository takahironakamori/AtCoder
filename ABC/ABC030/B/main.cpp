#include <bits/stdc++.h>
using namespace std;

int main() {

  double n, m;
  cin >> n >> m;

  if (12 <= n) {
    n = n - 12;
  }

  n = n * 30 + m * 0.5;
  m = m * 6;

  double res = abs(n - m);
  
  if (180 < res) {
    res = 360 - res;
  }

  cout << res << endl;

}