#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<int> C(N);
  vector<int> S(N);
  vector<int> F(N);
  for (int i = 0; i < N - 1; i++) {
    cin >> C[i] >> S[i] >> F[i];
  }

  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    int answer = 0;
    if (i != N - 1) {
      for (int j = i; j < N - 1; j++) {
        if (answer < S[j]) {
          answer = S[j];
        } else if (answer % F[j] != 0) {
          answer = answer + F[j] - answer % F[j];
        }
        answer += C[j];
      }

    }
    cout << answer << endl;
  }

  return 0;

}
