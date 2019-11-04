#include <bits/stdc++.h>
using namespace std;

long gcd(long a, long b) {

  if (b == 0) {
    return a;
  }

  return gcd(b, a % b);

}

int main() {

  int N, X;
  cin >> N >> X;
  
  vector<int> x(N);
  for (int i = 0; i < N; i++) {
    cin >> x[i];
  }

  int g = abs(x[0] - X);

  for (int i = 1; i < N; i++) {
    g = gcd(g, abs(x[i] - X));
  }

  cout << g << endl;
  
}