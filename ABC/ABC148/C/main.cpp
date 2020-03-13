#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {

  if (b == 0) {
    return a;
  }

  return gcd(b, a % b);

}

long long lcm(long a, long b) {

  return(long long) a / gcd(a, b) * b;

}

int main() {

  long long a, b;
  cin >> a >> b;

  long long result = lcm(a, b);

  cout << result << endl;

}
