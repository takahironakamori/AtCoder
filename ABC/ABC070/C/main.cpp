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

  int N;
  cin >> N;

  vector<long> T(N);
  for (int i = 0; i < N; i++) {
    cin >> T[i];
  }

  long g = T[0];
  
  for (int i = 1; i < N; i++) {
    g = lcm(g, T[i]);
  }
  
  cout << g << endl;

}