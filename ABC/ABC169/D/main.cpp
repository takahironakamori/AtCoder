#include <bits/stdc++.h>
using namespace std;

map<long, long> prime_factor(long N) {
  map<long, long> res;
  for (long i = 2; i * i <= N; i++) {
    while (N % i == 0) {
      res[i]++;
      N /= i;
    }
  }
  if (N != 1) {
    res[N] = 1;
  }
  return res;
}

int main() {

  long long N;
  cin >> N;

  map<long, long> mp = prime_factor(N);

  long long ans = 0;

  for (auto x : mp) {
    long long count = 1;
    long long v = x.second;
    bool flg = true;
    while (flg) {
      v -= count;
      if (v < count + 1) {
        ans += count;
        flg = false;
      }
      count++;
    }
  }

  cout << ans << endl;

}
