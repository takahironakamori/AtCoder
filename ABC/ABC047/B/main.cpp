#include <bits/stdc++.h>
using namespace std;

int main() {

  int W, H, N;
  cin >> W >> H >> N;

  vector<int> x(N);
  vector<int> y(N);
  vector<int> a(N);

  int ws = 0;
  int we = 0;
  int hs = 0;
  int he = 0;

  for (int i = 0; i < N; i++) {
    cin >> x[i] >> y[i] >> a[i];
  }

  for (int i = 0; i < N; i++) {
    if (a[i] == 1) {
      ws = max(ws, x[i]); 
    } else if (a[i] == 2) {
      we = max(we, W - x[i]);
    } else if (a[i] == 3) {
      hs = max(hs, y[i]);
    } else {
      he = max(he, H - y[i]);
    }
  }

  W = W - we - ws;
  H = H - he - hs;

  if (W <= 0 || H <= 0) {
    cout << 0 << endl;
  } else {
    cout << W * H << endl;
  }

}