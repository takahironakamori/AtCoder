#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, T;
  cin >> N >> T;

  vector<int> A(N);

  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  int time = 0;

  for (int i = 1; i < N; i++) {
    if (T < A[i] - A[i - 1]) {
      time += T;
    } else {
      time += A[i] - A[i - 1];
    }
  }
  time += T;

  cout << time << endl;

}