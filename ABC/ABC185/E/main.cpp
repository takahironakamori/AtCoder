#include <bits/stdc++.h>
using namespace std;

// ax + by = g となる x, y, g を返す
tuple<long long,long long,long long> extgcd(long long a, long long b) {
  if (b == 0) {
    return {a, 1, 0};
  }
  long long g, x, y;
  tie(g, x, y) = extgcd(b, a%b);
  return {g, y, x-a/b*y};
}

void f() {
  long long N, S, K;
  cin >> N >> S >> K;
  long long g, x, y;
  tie(g, x, y) = extgcd(K, N);
  if (S % g != 0) {
    cout << -1 << endl;
    return;
  }
  N /= g;
  S /= g;
  K /= g;
  long long ans = ((x * -S) % N + N) % N;
  cout << ans << endl;
}


int main() {

  int T;
  cin >> T;

  for (int i = 0; i < T; ++i) {
    f();
  }

  return 0;

}