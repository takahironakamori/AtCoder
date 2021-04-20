#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<long long> A(N);
  vector<long long> sum(N);
  for (int i = 0; i < N; ++i) {
    cin >> A[i];
  }

  sort(A.begin(), A.end());

  for (int i = 0; i < N; ++i) {
    if (i == 0) {
      sum[0] = A[0];
    } else {
      sum[i] = sum[i - 1] + A[i];
    }
  }

  long long ans = 0;
  for (int i = 0; i < N - 1; ++i) {
    long long d = sum[N - 1] - sum[i];
    ans += abs(A[i] * (N - i - 1) - d);
  }

  cout << ans << endl;

  return 0;

}