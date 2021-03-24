#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<vector<int>> C(N, vector<int>(N));
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < N; ++j) {
      cin >> C[i][j];
    }
  }

  int mn = 0;
  for (int i = 0; i < N; ++i) {
    if (C[i][0] < C[mn][0]) {
      mn = i;
    }
  }

  vector<int> A(N);
  vector<int> B(N);

  A[0] = C[mn][0];
  
  for (int i = 0; i < N; ++i) {
    B[i] = C[0][i] - A[0];
  }

  for (int i = 0; i < N; ++i) {
    A[i] = C[i][0] - B[0];      
  }

  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < N; ++j) {
      if (C[i][j] != A[i] + B[j]) {
        cout << "No" << endl;
        return 0;
      }
    }
  }

  if (*min_element(A.begin(), A.end()) < 0) {
    int dif = *min_element(A.begin(), A.end());
    for (int i = 0; i < N; ++i) {
      A[i] -= dif;
      B[i] += dif;
    }
  }

  if (*min_element(B.begin(), B.end()) < 0) {
    int dif = *min_element(B.begin(), B.end());
    for (int i = 0; i < N; ++i) {
      A[i] += dif;
      B[i] -= dif;
    }
  }

  cout << "Yes" << endl;
  for (int i = 0; i < N; ++i) {
    cout << A[i];
    if (i != N - 1) {
      cout << " ";
    }
  }
  cout << endl;

  for (int i = 0; i < N; ++i) {
    cout << B[i];
    if (i != N - 1) {
      cout << " ";
    }
  }
  cout << endl;

  return 0;

}
