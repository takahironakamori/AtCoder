#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<int> A(N);
  vector<int> B(N);
  vector<int> C(N - 1);

  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  for (int i = 0; i < N; i++) {
    cin >> B[i];
  }

  for (int i = 0; i < N - 1; i++) {
    cin >> C[i];
  }

  int answer = 0;
  int current = 100;

  for (int i = 0; i < N; i++) {
    answer += B[A[i] - 1];
    if (A[i] - current == 1){
      answer += C[A[i] - 2];
    }
    current = A[i];
  }

  cout << answer << endl;

}