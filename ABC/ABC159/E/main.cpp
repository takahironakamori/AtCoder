#include <bits/stdc++.h>
using namespace std;

const int INF = 1001001001;

int d[10][1010];

int main() {

  int H, W, K;
  cin >> H >> W >> K;

  vector<string> S(H);
  for (int i = 0; i < H; i++) {
    cin >> S[i];
  }

  int answer = INF;

  // 横で切るパターンを全部試す
  for (int bit = 0; bit < 1 << (H - 1); bit++) {

    // グループ番号
    int group = 0;

    // 各行がどのグループに属しているかを管理
    vector<int> id(H);
    for (int i = 0; i < H; i++) {
      id[i] = group;
      if (bit >> i & 1) {
        group++;
      }
    }

    // グループの個数は区切った数+1
    group++;

    // データ（グループ内に1が何個あるかを管理する）を初期化
    for (int i = 0; i < group; i++) {
      for (int j = 0; j < W; j++) {
        d[i][j] = 0;
      }
    }

    // 各グループの1の数を数える（まだ行しか見ていない）
    for (int i = 0; i < H; i++) {
      for (int j = 0; j < W; j++) {
        d[id[i]][j] += (S[i][j] - '0');
      }
    }

    // 線を引いた数
    int count = group - 1;

    // 1が何個あるかを確認するための配列
    vector<int> now(group);

    // 線を引くべきか（false）必要ないか（true）を返す関数
    auto add = [&](int i) {

      // 全部のグループの1の数を数える
      for (int j = 0; j < group; j++) {
        now[j] += d[j][i];
      }

      // K以下かを判定するフラグ
      bool flg = true;

      // 全部のグループのうち1個でもKを超えているとダメ
      for (int j = 0; j < group; j++) {
        if (K < now[j]) {
          flg = false;
          break;
        }
      }

      return flg;

    };

    // 列（縦）を見ていく
    for (int i = 0; i < W; i++) {

      // Kを超えるグループがある場合はそこで区切る必要がある
      if (!add(i)) {

        // 線を加える
        count++;

        // 初期化
        now = vector<int>(group);

        // 区切った後もダメな場合はこの区切り方は無理
        if (!add(i)) {
          count = INF;
          break;
        }

      }
    }

    answer = min(answer, count);

  }

  cout << answer << endl;

  return 0;

}
