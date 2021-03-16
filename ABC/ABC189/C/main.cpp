#include <bits/stdc++.h>
using namespace std;


int main() {

  int N;
  cin >> N;

  vector<int> A(N);
  for (int i = 0; i < N; ++i) {
    cin >> A[i];
  }

  int ans = 0;

  for (int i = 0; i < N; ++i) {
    int mn = A[i];
    ans = max(ans, A[i]);
    for (int j = i + 1; j < N; ++j) {
      mn = min(mn, A[j]);
      int v = j - i + 1;
      v *= mn;
      ans = max(ans, v);
    }
  }

  cout << ans << endl;

  return 0;

}