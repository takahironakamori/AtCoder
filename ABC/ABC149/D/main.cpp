#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, K, R, S, P;
  cin >> N >> K >> R >> S >> P;

  string T;
  cin >> T;

  int answer = 0;

  for (int i = 0; i < N; i++) {
    if (T[i] == 'r') {
      answer += P;
    } else if (T[i] == 's') {
      answer += R;
    } else {
      answer += S;
    }
  }

  for (int i = 0; i < N; i++) {
    if (K <= i) {
      if (T[i - K] == T[i]) {
        if (T[i] == 'r') {
          answer -= P;
        } else if (T[i] == 's') {
          answer -= R;
        } else {
          answer -= S;
        }
        T[i] = 'z';
      }
    }
  }

  cout << answer << endl;

}
