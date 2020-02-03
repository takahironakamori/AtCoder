#include <bits/stdc++.h>
using namespace std;

int main() {

  int T, N;
  cin >> T >> N;

  deque<int> A;
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    A.push_back(a);
  }

  int M;
  cin >> M;

  vector<int> B(M);
  for (int i = 0; i < M; i++) {
    cin >> B[i];
  }

  while (0 < M) {
    if (0 < A.size()) {
      int a = A.back();
      if (B[M - 1] - T <= a && a <= B[M - 1]) {
        A.pop_back();
        M--;
      } else {
        A.pop_back();
      }
    } else {
      cout << "no" << endl;
      return 0;
    }
  }

  cout << "yes" << endl;
  return 0;

}
