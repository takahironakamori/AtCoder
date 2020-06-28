#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<int> x(N);
  vector<int> y(N);

  for (int i = 0; i < N; i++) {
    cin >> x[i] >> y[i];
  }

  double mx = 0;
  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      double d = (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]);
      double dis = sqrt(d);
      mx = max(mx, dis);
    }
  }

  printf("%.16f", mx);
  printf("\n");
  return 0;

}
