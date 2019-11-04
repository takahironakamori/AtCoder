#include <bits/stdc++.h>
using namespace std;

long gcd(long a, long b) {
  if (b == 0) {
    return a;
  }
  return gcd(b, a % b);
}

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

  long A, B;
  cin >> A >> B;

  long g = gcd(A, B);

  map<long, long> m = prime_factor(g);
  
  cout << m.size() + 1 << endl;

}