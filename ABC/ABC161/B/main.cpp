#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, M;
  cin >> N >> M;

  vector<int> A(N);
  int sum = 0;
  for (int i = 0; i < N; i++) {
    cin >> A[i];
    sum += A[i];
  }

  int count = 0;
  int limit = ceil((double) sum / (4 * M));

  for (int i = 0; i < N; i++) {
    if (limit <= A[i]) {
      count++;
    }
  }

  if (M <= count) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;

}
