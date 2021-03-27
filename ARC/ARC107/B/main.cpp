#include <bits/stdc++.h>
using namespace std;

long long N, K;

long long f(long long x) {
  if (x < 2) {
    return 0;
  }
  if (2 * N < x) {
    return 0;
  }
  if (x <= N + 1) {
    return x - 1;
  }
  return 2 * N + 1 - x;
}

int main() {
  
  cin >> N >> K;

  long long ans = 0;

  for (long long ab = 2; ab <= 2 * N; ++ab) {
    long long cd = ab - K;
    if (cd < 2) {
      continue;
    }
    long long sumAB = f(ab);
    long long sumCD = f(cd);
    ans += sumAB * sumCD;
  }

  cout << ans << endl;

  return 0;

}