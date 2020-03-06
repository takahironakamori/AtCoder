#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<int> A(N);
  vector<int> A2(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  A2 = A;
  sort(A.begin(), A.end() , greater<int>());

  for (int i = 0; i < N; i++) {
    if (A2[i] == A[0]) {
      cout << A[1] << endl;
    } else {
      cout << A[0] << endl;
    }
  }

  return 0;

}
