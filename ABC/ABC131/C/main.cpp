#include <bits/stdc++.h>
using namespace std;

long gcd(long a, long b) {

  if (b == 0) {
    return a;
  }

  return gcd(b, a % b);

}

long lcm(long a, long b) {

  return a / gcd(a, b) * b;

}

int main() {

  long A, B, C, D;
  cin >> A >> B >> C >> D;

  long lcm_ = lcm(C, D);

  long A1 = A / C;
  long B1 = B / C;
  long AB1 = B1 - A1;
  if (A % C == 0) {
    AB1++;
  }

  long A2 = A / D;
  long B2 = B / D;
  long AB2 = B2 - A2;
  if (A % D == 0) {
    AB2++;
  }

  long A3 = A / lcm_;
  long B3 = B / lcm_;
  long AB3 = B3 - A3;
  if (A % lcm_ == 0) {
    AB3++;
  }

  long AB = AB1 + AB2 - AB3;
  
  cout << B - A + 1 - AB << endl;

}