#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  long long A, B, K;
  cin >> A >> B >> K;

  long long a = A;

  if (A <= K) {
    a = 0;
    K = K - A;
  } else {
    a = A - K;
    K = 0;
  }

  long long b = B;

  if (B <= K) {
    b = 0;
  } else {
    b = B - K;
  }

  cout << a << " " << b << endl;
 
}