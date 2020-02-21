#include <bits/stdc++.h>
using namespace std;

// A ... 0
// C ... 1
// G ... 2
// T ... 3
// に置き換えて考える

// [文字数][最後から1文字目][最後から2文字目][最後から3文字目]:=文字列のパターン数
int dp[101][4][4][4];

// 10^9 + 7
int mod = 1000000007;

int main() {

  int N;
  cin >> N;

  // スタート
  dp[0][3][3][3] = 1;

  // 文字列の文字数
  for (int length = 0; length < N; length++) {

    // 最後から1文字目
    for (int s1 = 0; s1 < 4; s1++) {

      // 最後から2文字目
      for (int s2 = 0; s2 < 4; s2++) {

        // 最後から3文字目
        for (int s3 = 0; s3 < 4; s3++) {

          // 条件に当てはまるものがない場合は次へ
          if (dp[length][s1][s2][s3] == 0) {
            continue;
          }

          // 新しく追加する文字
          for (int a = 0; a < 4; a++) {

            // ダメな場合(1) A ? G + C
            if (a == 1 && s1 == 2 && s3 == 0) {
              continue;
            }
            // ダメな場合(2) A G ? + C
            if (a == 1 && s2 == 2 && s3 == 0) {
              continue;
            }
            // ダメな場合(3) A G + C
            if (a == 1 && s1 == 2 && s2 == 0) {
              continue;
            }
            // ダメな場合(4) G A + C
            if (a == 1 && s1 == 0 && s2 == 2) {
              continue;
            }
            // ダメな場合(5) A C + G
            if (a == 2 && s1 == 1 && s2 == 0) {
              continue;
            }

            // a を追加した文字列を作る
            dp[length+1][a][s1][s2] += dp[length][s1][s2][s3];
            dp[length+1][a][s1][s2] %= mod;

          }

        }

      }

    }

  }

  // 答えを集計する
  int answer = 0;

  // 最後から1文字目
  for (int s1 = 0; s1 < 4; s1++) {

    // 最後から2文字目
    for (int s2 = 0; s2 < 4; s2++) {

      // 最後から3文字目
      for (int s3 = 0; s3 < 4; s3++) {

        answer += dp[N][s1][s2][s3];
        answer %= mod;

      }

    }

  }

  cout << answer << endl;

  return 0;

}
