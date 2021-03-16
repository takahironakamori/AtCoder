#include <bits/stdc++.h>
using namespace std;

int main() {

  long long X, K, D;
  cin >> X >> K >> D;
  X = abs(X);

  long long ans = 0;

  if (K <= X / D) {
    ans = X - D * K;
  } else {
    long long move = X / D;
    long long matagu = K - move;
    ans = X - move * D;
    if (matagu % 2 == 1) {
      ans = abs(ans - D);
    }
  }

  cout << ans << endl;

  return 0;

}