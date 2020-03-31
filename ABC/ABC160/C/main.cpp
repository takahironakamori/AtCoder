#include <bits/stdc++.h>
using namespace std;

int main() {

  int K, N;
  cin >> K >> N;

  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  int mx = 0;

  for (int i = 0; i < N; i++) {
    mx = max(mx, A[i + 1] - A[i]);
    if (i == N - 1) {
      mx = max(mx, K - A[i] + A[0]);
    }
  }

  cout << K - mx << endl;

  return 0;

}
