#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<int> A(N);
  long long ans = 0;

  for (int i = 0; i < N; ++i) {
    cin >> A[i];
  }

  sort(A.rbegin(), A.rend());

  int current = 0;
  int count = 0;
  for (int i = 0; i < N - 1; ++i) {
    ans += A[current];
    if (i == 0) {
      current++;
    } else {
      if (count == 1) {
        count = 0;
        current++;
      } else {
        count++;
      }
    }
  }
  
  cout << ans << endl;

  return 0;
}