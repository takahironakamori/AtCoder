#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<int> A(N);
  vector<long long> sum(N);
  vector<long long> mx(N);

  for (int i = 0; i < N; ++i) {
    cin >> A[i];
    if (i == 0) {
      sum[0] = A[0];
      mx[0] = A[0];
    } else {
      sum[i] = sum[i - 1] + A[i];
      mx[i] = max(mx[i - 1], sum[i]);
    }
  }

  long long ans = 0;
  long long current = 0;
  for (int i = 0; i < N; ++i) {
    ans = max(ans, current + mx[i]);
    current += sum[i];
  }

  cout << ans << endl;

  return 0;

}