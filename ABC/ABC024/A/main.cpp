#include <bits/stdc++.h>
using namespace std;

int main() {

  int A, B, C, K, S, T;
  cin >> A >> B >> C >> K >> S >> T;

  int answer = S * A + T * B;

  if (K <= S + T) {
    answer -= (S + T) * C;
  }

  cout << answer << endl;

}