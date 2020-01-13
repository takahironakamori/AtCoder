#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, K, M;
  cin >> N >> K >> M;

  int sum = 0;

  for(int i = 0; i < N-1; i++) {
    int A;
    cin >> A;
    sum += A;
  }

  int answer = M * N - sum;

  if (answer <= K) {
    cout << max(0, answer) << endl;
  } else {
    cout << -1 << endl;
  }

}