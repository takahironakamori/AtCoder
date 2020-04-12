#include <bits/stdc++.h>
using namespace std;

int H, W, T;
vector<string> s(10);

int sx, sy, gx, gy;

vector<int> dx = {1, 0, -1, 0};
vector<int> dy = {0, 1, 0, -1};

int INF = 1e9+7;

// 二分探索用
int low;
int high;

void bfs () {

  low = 0;
  high = T;

  while (high - low > 1) {

    int mid = (high + low) / 2;

    vector<vector<int>> d(H,vector<int>(W));

    for (int i = 0; i < H; i++) {
      for (int j = 0; j < W; j++) {
        d[i][j] = INF;
      }
    }

    deque<pair<int,int>> que;
    que.push_back(make_pair(sx, sy));
    d[sy][sx] = 0;

    while (que.size() != 0) {
      pair<int, int> p = que.front();
      que.pop_front();
      for (int i = 0; i < 4; i++) {
        int nx = p.first + dx[i];
        int ny = p.second + dy[i];
        if (0 <= nx && nx < W && 0 <= ny && ny < H) {
          int v = 1;
          if (s[ny][nx] == '#') {
            v = mid;
          }
          if (d[ny][nx] < d[p.second][p.first] + v) {
            continue;
          }
          que.push_back(make_pair(nx, ny));
          d[ny][nx] = d[p.second][p.first] + v;
        }
      }
    }

    if (d[gy][gx] > T) {
      high = mid;
    } else {
      low = mid;
    }

  }

}

int main() {

  cin >> H >> W >> T;

  for (int i = 0; i < H; i++) {
    cin >> s[i];
  }

  // スタートとゴールを探す
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if (s[i][j] == 'S') {
        sx = j;
        sy = i;
      } else if (s[i][j] == 'G') {
        gx = j;
        gy = i;
      }
    }
  }

  bfs();

  cout << low << endl;

  return 0;

}
