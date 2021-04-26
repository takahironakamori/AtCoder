#include <bits/stdc++.h>
using namespace std;


int main() {
  
  int A, B;
  cin >> A >> B;

  vector<long long> a(A);
  long long sumA = 0;
  for (int i = 0; i < A; ++i) {
    a[i] = i + 1;
    sumA += a[i];
  }

  vector<long long> b(B);
  long long sumB = 0;
  for (int i = 0; i < B; ++i) {
    b[i] = 0 - i - 1;
    sumB += b[i];
  }

  long long df = sumA + sumB;

  while (0 != df) {
    if (df < 0) {
      a[A - 1] += abs(df);
      sumA += abs(df);
    } else {
      b[B - 1] -= df;
      sumB -= df;
    }
    df = sumA + sumB;
  }

  for (int i = 0; i < A; ++i) {
    cout << a[i] << " ";
  }

  for (int i = 0; i < B; ++i) {
    cout << b[i];
    if (i != B - 1) {
      cout << " ";
    }
  }

  cout << endl;

  return 0;
}