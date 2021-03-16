#include <bits/stdc++.h>
using namespace std;


int main() {

  int N;
  cin >> N;

  vector<int> x(N);
  vector<int> y(N);

  for (int i = 0; i < N; ++i) {
    cin >> x[i] >> y[i];
  }

  for (int i = 0; i < N; ++i) {
    for (int j = i + 1; j < N; ++j) {
      for (int k = j + 1; k < N; ++k) {
        int x1 = 0;
        int y1 = 0;
        int x2 = x[j] - x[i];
        int y2 = y[j] - y[i];
        int x3 = x[k] - x[i];
        int y3 = y[k] - y[i];
        if (y2 * x3 == y3 * x2) {
          cout << "Yes" << endl;
          return 0;
        }
      }
    }
  }

  cout << "No" << endl;

  return 0;

}