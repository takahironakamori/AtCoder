#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<int> B(N);
  for (int i = 1; i < N; i++) {
    cin >> B[i];
  }

  vector<int> A(N+1);
  
  A[1] = B[1];

  for (int i = 1; i < N; i++) {
    if (B[i] < A[i]) {
      A[i] = B[i];
    }
    A[i + 1] = B[i];
  }

  int m = 0;

  for (int i = 1; i <= N; i++) {
    m += A[i];
  }

  cout << m << endl;

}