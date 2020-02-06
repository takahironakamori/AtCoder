#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  int INF = 100000000;

  vector<int> c(N);
  for (int i = 0; i < N; i++) {
    cin >> c[i];
  }

  // 長さ i+1 の増加部分列の最後の要素の最小
  vector<int> dp(N + 1, INF);

  for (int i = 0; i < N; i++) {
    *upper_bound(dp.begin(), dp.end(), c[i]) = c[i];
  }

  int len = 0;

  for (int i = 0; i < N; i++) {
    if (dp[i] != INF) {
      len++;
    }
  }

  cout << N - len << endl;

  return 0;

}
