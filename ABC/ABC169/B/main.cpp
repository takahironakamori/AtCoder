#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<long long> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  for (int i = 0; i < N; i++) {
    if (A[i] == 0) {
      cout << 0 << endl;
      return 0;
    }
  }

  long long answer = A[0];

  for (int i = 1; i < N; i++) {
    long long a = 1000000000000000000 / answer;
    if (a < A[i]) {
      cout << -1 << endl;
      return 0;
    } else {
      answer *= A[i];
    }
  }

  cout << answer << endl;

}
