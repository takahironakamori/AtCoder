#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<int> A(N+1);
  for (int i = 0; i <= N; i++) {
    cin >> A[i];
  }

  vector<int> B(N);
  for (int i = 0; i < N; i++) {
    cin >> B[i];
  }

  long long answer = 0;

  for (int i = 0; i < N; i++) {

    int mn = min(A[i], B[i]);
    A[i] -= mn;
    B[i] -= mn;
    answer += mn;

    int mn2 = min(A[i+1], B[i]);
    A[i+1] -= mn2;
    B[i] -= mn2;
    answer += mn2;

  }

  cout << answer << endl;

  return 0;

}
