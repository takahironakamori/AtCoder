#include <bits/stdc++.h>
using namespace std;

int main() {

  int L, H, N;
  cin >> L >> H >> N;

  vector<int> A(N);

  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  for (int i = 0; i < N; i++) {

    if (L <= A[i] && A[i] <= H) {
      cout << 0 << endl;
    } else if (A[i] < L) {
      cout << L - A[i] << endl;
    } else {
      cout << -1 << endl;
    }

  }
 
}