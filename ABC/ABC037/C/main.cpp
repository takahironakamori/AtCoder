#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, K;
  cin >> N >> K;

  vector<long long> sum(N);
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    if (i != 0) {
      sum[i] = sum[i - 1] + a;
    } else {
      sum[i] = a;
    }
  }

  long long answer = 0;

  for (int i = 0; i < N - (K - 1); i++) {
    if (i != 0) {
      answer += sum[i + K - 1] - sum[i - 1];
    } else {
      answer += sum[K - 1];
    }
  }

  cout << answer << endl;

  return 0;

}
