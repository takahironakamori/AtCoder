#include <bits/stdc++.h>
using namespace std;

int main() {

  long W, H, x, y;
  cin >> W >> H >> x >> y;

  int f = 0;

  if (double(x) == (double(W) / 2) && double(y) == (double(H) / 2)) {
    f = 1;
  }

  cout << fixed << setprecision(15);
	cout << double(W) * double(H) / 2.0 << " " << f << endl;

}