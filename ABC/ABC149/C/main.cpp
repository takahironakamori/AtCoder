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

  int X;
  cin >> X;

  bool flg = false;

  while (flg == false) {
    flg = is_prime(X);
    if (!flg) {
      X++;
    }
  }

  cout << X << endl;

  return 0;

}
