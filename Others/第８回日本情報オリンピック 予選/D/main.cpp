#include <bits/stdc++.h>
using namespace std;

int dy[] = {1, 0, -1, 0};
int dx[] = {0, 1, 0, -1};

int m, n;
int maze[100][100];
int ans = 0;

void dfs (int x, int y, int count) {

  // 割った薄氷の最大値を更新する
  ans = max(ans, count);

  // 4方向移動
  for (int i = 0; i < 4; i++) {

    int cx = x + dx[i];
    int cy = y + dy[i];

    if (cx < 0 || m <= cx || cy < 0 || n <= cy || maze[cy][cx] == 0) {
      continue;
    }

    // 到達した（= 割った）ことにする
    maze[cy][cx] = 0;

    // 次へ進む
    dfs(cx, cy, count+1);

    // 戻す
    maze[cy][cx] = 1;

  }

}

int main() {

  cin >> m >> n;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> maze[i][j];
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (maze[i][j] == 1) {
        dfs(j, i, 0);
      }
    }
  }

  cout << ans << endl;
  return 0;

}
