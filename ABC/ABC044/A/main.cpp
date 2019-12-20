#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, K, X, Y;
  cin >> N >> K >> X >> Y;

  int answer = 0;

  if (N <= K) {
    answer = N * X;
  } else {
    answer = K * X + (N - K) * Y;
  }
  
  cout << answer << endl;

}