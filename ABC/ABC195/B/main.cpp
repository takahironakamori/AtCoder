#include <bits/stdc++.h>
using namespace std;


int main() {

  int A, B, W;
  cin >> A >> B >> W;

  W *= 1000;

  int mn = 1000000000;
  int mx = 0;
  
  for (int i = 1; i <= W; ++i) {
    if (A * i <= W && W <= B * i) {
      mn = min(mn, i);
      mx = max(mx, i);
    }
  }

  if (mx == 0) {
    cout << "UNSATISFIABLE" << endl;
  } else {
    cout << mn << " " << mx << endl;
  }

  return 0;

}