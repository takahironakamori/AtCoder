#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<int> A(N);
  int mx = 0;

  for (int i = 0; i < N; i++) {
    cin >> A[i];
    mx = max(mx, A[i]);
  }

  vector<int> check(mx + 1);

  for (int i = 0; i < N; ++i) {
    int current = A[i];
    if (check[current] == 0) {
      for (int j = current; j <= mx; j += current) {
        check[j]++;
      }
    } else {
      check[current]++;
    }
  }

  int ans = 0;

  for (int i = 0; i <= N; i++) {
    int current = A[i];
    if (check[current] == 1) {
      ans++;
    }
  }

  cout << ans << endl;

  return 0;

}
