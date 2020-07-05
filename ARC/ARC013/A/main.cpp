#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, M, L;
  int P, Q, R;
  cin >> N >> M >> L;
  cin >> P >> Q >> R;

  int ans = 0;

  int a = N / P;
  int b = M / Q;
  int c = L / R;

  ans = max(ans, a * b * c);

  a = N / P;
  b = L / Q;
  c = M / R;

  ans = max(ans, a * b * c);

  a = M / P;
  b = L / Q;
  c = N / R;

  ans = max(ans, a * b * c);

  a = M / P;
  b = N / Q;
  c = L / R;

  ans = max(ans, a * b * c);

  a = L / P;
  b = N / Q;
  c = M / R;

  ans = max(ans, a * b * c);

  a = L / P;
  b = M / Q;
  c = N / R;

  ans = max(ans, a * b * c);

  cout << ans << endl;
  return 0;

}
