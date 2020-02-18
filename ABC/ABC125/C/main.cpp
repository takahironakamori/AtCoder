#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
  if (b == 0) {
    return a;
  }
  return gcd(b, a % b);
}

int main() {

  int N;
  cin >> N;

  vector<int> A(N);

  // 左から順番に計算したGCD
  vector<int> L(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
    if (i == 0) {
      L[i] = A[i];
    } else {
      L[i] = gcd(L[i - 1], A[i]);
    }
  }

  // 右から順番に計算したGCD
  vector<int> R(N);
  for (int i = N - 1; 0 <= i; i--) {
    if (i == N - 1) {
      R[i] = A[i];
    } else {
      R[i] = gcd(R[i + 1], A[i]);
    }
  }

  // | L[i-1] | i | R[i+1] |
  int answer = 0;
  for (int i = 0; i < N; i++) {
    if (i == 0) {
      answer = max(answer, R[i + 1]);
    } else if(i == N - 1) {
      answer = max(answer, L[i - 1]);
    } else {
      answer = max(answer, gcd(L[i - 1],R[i + 1]));
    }
  }

  cout << answer << endl;

  return 0;

}
