#include <bits/stdc++.h>
using namespace std;

int dy[] = {1, 0, -1, 0};
int dx[] = {0, 1, 0, -1};

int H, W;
char maze[500][500];
bool flg[500][500];
pair<int,int> s;
pair<int,int> g;
string ans = "No";

void dfs (int x, int y) {

  // ゴール地点だったらYesで終わり
  if (x == g.first && y == g.second) {
    ans = "Yes";
    return;
  }

  // 4方向移動
  for (int i = 0; i < 4; i++) {

    int cx = x + dx[i];
    int cy = y + dy[i];

    if (cx < 0 || W <= cx || cy < 0 || H <= cy || maze[cy][cx] == '#' || flg[cy][cx] == true) {
      continue;
    }

    // 到達した（= 割った）ことにする
    flg[cy][cx] = true;

    // 次へ進む
    dfs(cx, cy);

  }

}

int main() {

  cin >> H >> W;

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cin >> maze[i][j];
      if (maze[i][j] == 's') {
        s = make_pair(j,i);
      }
      if (maze[i][j] == 'g') {
        g = make_pair(j,i);
      }
    }
  }

  dfs(s.first, s.second);

  cout << ans << endl;
  return 0;

}
