#include <bits/stdc++.h>
using namespace std;

bool is_prime(long N) {
  for (long i = 2; i * i <= N; i++) {
    if (N % i == 0) {
      return false;
    }
  }
  return N != 1;
}

int main() {

  long N;
  cin >> N;

  N = N * (N + 1) / 2;

  bool isPrime = is_prime(N);

  if (isPrime) {
    cout << "WANWAN" << endl;
  } else {
    cout << "BOWWOW" << endl;
  }

}
