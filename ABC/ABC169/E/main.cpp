#include <bits/stdc++.h>
using namespace std;


int main() {

  int N;
  cin >> N;

  vector<int> A(N);
  vector<int> B(N);
  for (int i = 0; i < N; ++i) {
    cin >> A[i] >> B[i];
  }

  sort(A.begin(), A.end());
  sort(B.begin(), B.end());

  int ans = 0;
  int l = 0;
  int r = 0;
  if (N % 2 == 1) {
    l = A[N/2];
    r = B[N/2];
  } else {
    l = A[N/2 - 1] + A[N/2];
    r = B[N/2 - 1] + B[N/2];
  }
  ans = r - l + 1;
  cout << ans << endl;
  return 0;

}