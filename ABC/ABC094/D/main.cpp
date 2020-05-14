#include <bits/stdc++.h>
using namespace std;


int main() {

  int n;
  cin >> n;

  vector<int> a(n);
  int mx = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    mx = max(mx, a[i]);
  }

  int v;
  double d = mx;

  if (a.size() == 2) {
    if (a[0] < a[1]) {
      cout << a[1] << " " << a[0] << endl;
    } else {
      cout << a[0] << " " << a[1] << endl;
    }
    return 0;
  }

  for (int i = 0; i < n; i++) {
    double d_ = abs((double) (mx / 2) - a[i]);
    if (d_ < d) {
      d = d_;
      v = a[i];
    }
  }

  cout << mx << " " << v << endl;

  return 0;
}
