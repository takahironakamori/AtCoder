#include <bits/stdc++.h>
using namespace std;

double f(int n) {
  double res = 0;
  double n_ = n * (n + 1) / 2;
  res = n_ / n;
  return res;
}

int main() {

  int N, K;
  cin >> N >> K;

  vector<int> p(N);
  vector<double> k(N);
  vector<double> sum(N);
  double all = 0;

  for (int i = 0; i < N; i++) {
    cin >> p[i];
    k[i] = f(p[i]);
    if (i == 0) {
      sum[i] = k[i];
    } else {
      sum[i] = k[i] + sum[i-1];
    }
  }

  double answer = sum[K - 1];

  for (int i = K; i < N; i++) {
    answer = max(answer, sum[i] - sum[i - K]);
  }

  cout << setprecision(11) << answer << endl;

  return 0;

}
