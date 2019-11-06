#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  int S = 0;
  int Aodd = 0;
  
  vector<int> A(N);

  for (int i = 0; i < N; i++) {
    cin >> A[i];
    S += A[i];
    if (i % 2 == 1) {
      Aodd += A[i];
    }
  }

  vector<int> X(N+1);

  X[0] = S - 2 * Aodd;
  
  cout << X[0] << " ";

  for (int i = 1; i < N; i++) {
    X[i] = 2 * A[i-1] - X[i-1];
    cout << X[i];
    if (i == N-1) {
      cout << endl;
    } else {
      cout << " ";
    }
  }

}