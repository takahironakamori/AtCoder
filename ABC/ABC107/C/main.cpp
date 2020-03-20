#include <bits/stdc++.h>
using namespace std;

int main() {

  long long INF = 1LL<<60;

  int N, K;
  cin >> N >> K;

  vector<int> x(N);
  for (int i = 0; i < N; i++) {
    cin >> x[i];
  }

  long long answer = INF;

  for (int i = 0; i < N - K + 1; i++) {
    // 右端
    long long right = x[i];
    // 左端
    long long left = x[i + K - 1];
    // 右から左
    answer = min(answer, abs(0 - right) + abs(right - left));
    // 左から右
    answer = min(answer, abs(0 - left) + abs(left - right));
  }

  cout << answer << endl;

  return 0;

}
