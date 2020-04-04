#include <bits/stdc++.h>
using namespace std;

long long mod = 1000000007;

long long f (long long a) {

  long long result = 1;

  for (int i = 1; i <= a; i++) {
    result *= i;
    result %= mod;
  }

  return result;
}


int main() {

  int N, M;
  cin >> N >> M;

  long long answer = 0;

  if (abs(N - M) <= 1) {
    if (N == M) {
      answer = f(N) * f(M) * 2;
    } else {
      answer = f(N) * f(M);
    }
    answer %= mod;
  }

  cout << answer << endl;

  return 0;

}
