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

long sum(long a) {
  long result = 0;
  while (a > 0) {
    result += a % 10;
    a /= 10;
  }
  return result;
}

int main() {

  long N;
  cin >> N;

  bool isPrime = is_prime(N);

  bool isEven = false;
  if (N % 2 == 0 || N % 5 == 0) {
    isEven = true;
  }

  bool is3 = false;
  long sum_ = sum(N);
  if (sum_ % 3 == 0) {
    is3 = true;
  }

  if (isPrime) {
    cout << "Prime" << endl;
  } else if (isEven == false && is3 == false && N != 1) {
    cout << "Prime" << endl;
  } else {
    cout << "Not Prime" << endl;
  }
  return 0;

}
