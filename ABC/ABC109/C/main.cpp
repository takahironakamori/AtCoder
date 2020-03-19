#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
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

  int answer = abs(x[0] - X);

  for (int i = 0; i < N; i++){
    int gcd_ = abs(x[i] - X);
    answer = gcd(gcd_, answer);
  }

  cout << answer << endl;

  return 0;

}
