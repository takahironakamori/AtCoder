#include <bits/stdc++.h>
using namespace std;

long long INF = 1LL<<60;

int F[110][11];
long long P[110][11];

int main() {

  int N;
  cin >> N;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < 10; j++) {
      cin >> F[i][j];
    }
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < 11; j++) {
      cin >> P[i][j];
    }
  }

  long long answer = 0 - INF;

  for(int bits = 1; bits < (1 << 10); bits++) {

    long long answer_ = 0;

    for (int i = 0; i < N; i++) {
      int count_ = 0;
      for (int j = 0; j < 10; j++) {
        if (bits >> j & 1) {
          if (F[i][j] == 1) {
            count_++;
          }
        }
      }
      answer_ += P[i][count_];
    }

    answer = max(answer, answer_);

  }

  cout << answer << endl;

  return 0;

}
