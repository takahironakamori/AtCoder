#include <bits/stdc++.h>
using namespace std;

long long INF = 1000000000000;
int R, G, B;

long long cost(long long pos, long long count) {
  if (G + B <= count) {
    // R を配置
    return abs(400 - pos);
  } else if (B <= count) {
    // G を配置
    return abs(500 - pos);
  } else {
    // B を配置
    return abs(600 - pos);
  }
}

int main() {

  cin >> R >> G >> B;

  // dp[マーブルを置く位置][残りのマーブル]
  // 大きい数で初期化
  vector<vector<long long>> dp(1000, vector<long long>(R + G + B + 1, INF));

  // j が R + G + B のときは移動しないので全部 0
  for (int i = 0; i < 1000; i++) {
    dp[i][R + G + B] = 0;
  }

  for (int i = 1; i < 1000; i++) {
    for (int j = 0; j < R + G + B; j++) {
      // i番目にマーブルを置かなかった場合と、マーブルを置いた場合で小さい方を採用
      dp[i][j] = min(dp[i - 1][j], dp[i - 1][j + 1] + cost(i, j));
    }
  }

  long long answer = INF;

  // マーブルを全部置いたとき(j = 0)の最小値が答え
  for (int i = 0; i < 1000; i++) {
    answer = min(answer, dp[i][0]);
  }

  cout << answer << endl;

}
