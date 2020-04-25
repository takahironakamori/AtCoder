#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, M;
  cin >> N >> M;

  int sum = 0;
  for (int i = 0; i < M; i++) {
    int A;
    cin >> A;
    sum += A;
  }

  if (N < sum) {
    cout << -1 << endl;
  } else {
    cout << N - sum << endl;
  }

  return 0;

}
