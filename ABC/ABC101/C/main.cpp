#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, K;
  cin >> N >> K;

  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  int answer = 0;

  answer = ceil((double) (N - 1) / (K - 1));

  cout << answer << endl;

  return 0;

}
