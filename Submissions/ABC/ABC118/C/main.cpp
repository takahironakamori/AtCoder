#include <bits/stdc++.h>
using namespace std;

long gcd(long a, long b) {

  if (b == 0) {
    return a;
  }
  return gcd(b, a % b);

}

int main() {

  int N;
  cin >> N;

  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  int g = A[0];

  for (int i = 1; i < N; i++) {
    g = gcd(g, A[i]);
  }

  cout << g << endl;

}