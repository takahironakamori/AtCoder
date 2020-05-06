#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, K;
  cin >> N >> K;

  vector<int> A(N);
  for (int i = 0; i < K; i++) {
    int d;
    cin >> d;
    for (int j = 0; j < d; j++) {
      int a;
      cin >> a;
      A[a-1]++;
    }
  }

  int answer = 0;
  for (int i = 0; i < N; i++) {
    if (A[i] == 0) {
      answer++;
    }
  }

  cout << answer << endl;

  return 0;

}
