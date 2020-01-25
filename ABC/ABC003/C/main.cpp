#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, K;
  cin >> N >> K;

  vector<int> R(N);
  for (int i = 0; i < N; i++) {
    cin >> R[i];
  }

  sort(R.begin(), R.end());

  double answer = 0;

  for (int i = N - K; i < N; i++) {
    answer += R[i];
    answer /= 2;
  }

  printf("%.16f", answer);
  printf("\n");

}
