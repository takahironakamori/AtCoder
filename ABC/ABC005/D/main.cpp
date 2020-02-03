#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<vector<int>> D(N+1, vector<int>(N+1));
  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= N; j++) {
      cin >> D[i][j];
    }
  }

  int Q;
  cin >> Q;

  vector<int> P(Q);
  for (int i = 0; i < Q; i++) {
    cin >> P[i];
  }

  // 二次元累積和
  // 面積ごとのおいしさ
  vector<vector<int>> S(N+1, vector<int>(N+1));
  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= N; j++) {
      S[i][j] += S[i][j-1] + S[i-1][j] - S[i-1][j-1] + D[i][j];
    }
  }

  // たこ焼きの数ごとのおいしさの最大値を求める O(N^4)
  vector<int> dp(3000);
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      for (int k = i + 1; k < N + 1; k++) {
        for (int l = j + 1; l < N + 1; l++) {
          int pos = (k - i) * (l - j);
          dp[pos] = max(dp[pos], S[k][l] - S[i][l] - S[k][j] + S[i][j]);
        }
      }
    }
  }

  // たこ焼きの数ごとに、i より小さい数のほうがおいしさが大きくなるときはおいしさを書き換える
  for (int i = 1; i < 3000; i++) {
    dp[i] = max(dp[i], dp[i-1]);
  }

  // 各定員ごとにおいしさの最大値を出力する
  for (int i = 0; i < Q; i++){
    cout << dp[P[i]] << endl;
  }

  return 0;

}
