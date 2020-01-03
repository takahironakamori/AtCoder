#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, M, C;
  cin >> N >> M >> C;

  vector<int> B(M);
  for (int i = 0; i < M; i++) {
    cin >> B[i];
  }

  int answer = 0;

  for (int i = 0; i < N; i++) {
    int A = 0;
    for (int j = 0; j < M; j++) {
      int a_;
      cin >> a_;
      A += a_ * B[j];
    }
    if (0 < A + C) {
      answer++;
    }
  }

  cout << answer << endl;

}