#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
  if (b == 0) {
    return a;
  }
  return gcd(b, a % b);
}

int main() {

  int K;
  cin >> K;

  int answer = 0;

  for (int i = 1; i <= K; i++) {
    for (int j = 1; j <= K; j++) {
      for (int k = 1; k <= K; k++) {
        int gcd_ = gcd(i,j);
        answer += gcd(gcd_, k);
      }
    }
  }

  cout << answer << endl;

  return 0;

}
