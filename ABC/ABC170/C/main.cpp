#include <bits/stdc++.h>
using namespace std;

int main() {

  int X, N;
  cin >> X >> N;

  vector<bool> p(101);
  for (int i = 0; i < N; i++) {
    int P;
    cin >> P;
    p[P] = true;
  }

  if (p[X] == false) {
    cout << X << endl;
    return 0;
  }

  int d = 1000;
  int ans = 100;

  for (int i = 0; i < 102; i++) {
    if (p[i] == false) {
      int D = abs(i - X);
      if (D < d) {
        d = D;
        ans = i;
      }
    }
  }

  cout << ans << endl;

  return 0;

}
