#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<int> T(N);
  int sum = 0;
  for (int i = 0; i < N; i++) {
    cin >> T[i];
    sum += T[i];
  }

  int M;
  cin >> M;

  vector<int> P(M);
  vector<int> X(M);
  for (int i = 0; i < M; i++) {
    cin >> P[i] >> X[i];
  }

  for (int i = 0; i < M; i++) {
    int answer = sum - T[P[i] - 1] + X[i];
    cout << answer << endl;
  }

}