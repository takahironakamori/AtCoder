#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, M;
  cin >> N >> M;

  vector<int> A(M);

  for (int i = 0; i < N; i++) {
    int K;
    cin >> K;
    for (int j = 0; j < K; j++) {
      int a;
      cin >> a;
      A[a - 1]++;
    }
  }

  int answer = 0;

  for (int i = 0; i < M; i++) {
    if (A[i] == N) {
      answer++;
    }
  }

  cout << answer << endl;

}