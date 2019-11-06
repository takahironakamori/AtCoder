#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, K, Q;
  cin >> N >> K >> Q;

  vector<int> A(N);
  for (int i = 0; i < Q; i++) {
    int i_;
    cin >> i_;
    A[i_ - 1]++;
  }

  for (int i = 0; i < N; i++) {
    if (0 < (K + A[i] - Q)) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }

}