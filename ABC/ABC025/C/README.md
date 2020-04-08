### ABC025

# C - 双子と○×ゲーム

  [問題はこちら](https://atcoder.jp/contests/abc025/tasks/abc025_c)


## 発想

  9手目において、書くことのできる場所は1箇所しないので、書く場所は一意に決まる。<br>
  直大くんの得点と直子さんの得点の合計値は一定なので、<br>
  直大くんは、直大くんの得点 - 直子さんの得点の最大化を、<br>
  直子さんは、直大くんの得点 - 直子さんの得点の最小化を目指して行動するとする。<br>


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int b[2][3];
  int c[3][2];

  int dfs (int n, vector<vector<string>> board) {

    int score = 0;

    // 10手になったら得点を計算する
    if (n == 10) {
      score = 0;
      for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
          if (i < 2) {
            if (board[i][j] == board[i+1][j]) {
              score += b[i][j];
            }
          }
          if (j < 2) {
            if (board[i][j] == board[i][j+1]) {
              score += c[i][j];
            }
          }
        }
      }
      return score;
    } else {
      if (n % 2 == 0) {
        // 直子さんの番
        score = 1000000007;
        for (int i = 0; i < 3; i++) {
          for (int j = 0; j < 3; j++) {
            if (board[i][j] == "-") {
              board[i][j] = "×";
              score = min(score, dfs(n + 1, board));
              board[i][j] = "-";
            }
          }
        }
        return score;
      } else {
        // 直大くんの番
        score = -1000000007;
        for (int i = 0; i < 3; i++) {
          for (int j = 0; j < 3; j++) {
            if (board[i][j] == "-") {
              board[i][j] = "○";
              score = max(score, dfs(n + 1, board));
              board[i][j] = "-";
            }
          }
        }
        return score;
      }
    }
  }

  int main() {

    cin >> b[0][0] >> b[0][1] >> b[0][2];
    cin >> b[1][0] >> b[1][1] >> b[1][2];
    cin >> c[0][0] >> c[0][1];
    cin >> c[1][0] >> c[1][1];
    cin >> c[2][0] >> c[2][1];

    int sum = b[0][0] + b[0][1] + b[0][2] + b[1][0] + b[1][1] + b[1][2];
    sum += c[0][0] + c[0][1] + c[1][0] + c[1][1] + c[2][0] + c[2][1];

    // -:未記入、○:直大くん、×:直子さん
    vector<vector<string>> board(3, vector<string>(3));

    // 初期値（-）を入れる
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        board[i][j] = "-";
      }
    }

    // 直大くんの得点を計算する
    int scoreT = dfs(1, board);

    cout << scoreT << endl;
    cout << sum - scoreT << endl;

    return 0;

  }
  ```
