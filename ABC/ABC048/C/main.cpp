#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, x;
  cin >> N >> x;

  vector<int> a(N);
  long long sum = 0;

  for (int i = 0; i < N; i++) {
    cin >> a[i];
    sum += a[i];
  }

  for (int i = 0; i < N - 1; i++) {
    if (x < a[i] + a[i+1]) {
      int d1_ = a[i] + a[i+1] - x;
      if (d1_ <= a[i+1]) {
        a[i+1] -= d1_;
      } else {
        a[i+1] = 0;
      };
    }
    if (x < a[i] + a[i+1]) {
      int d2_ = a[i] + a[i+1] - x;
      if (d2_ <= a[i]) {
        a[i] -= d2_;
      } else {
        a[i] = 0;
      };
    }
  }

  long long result = 0;
  for (int i = 0; i < N; i++) {
    result += a[i];
  }

  cout << sum - result << endl;

  return 0;

}
