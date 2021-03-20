#include <bits/stdc++.h>
using namespace std;

long long N;

vector<long long> divisor(long long n) {
  vector<long long> res;
  for (long long i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      res.push_back(i);
      if (i != n / i) {
        res.push_back(n / i);
      }
    }
  }
  return res;
}

bool check(long long l) {
  long long v = 2 * N / l - l + 1;
  if (abs(v) % 2 == 0) {
    return true;
  } else {
    return false;
  }
}

int main() {

  cin >> N;

  int ans = 0;
  vector<long long> L = divisor(N * 2);

  for (long long i = 0; i < int(L.size()); ++i) {
    if (check(L[i])) {
      ans++;
    }
  }

  cout << ans << endl;

  return 0;

}