### ABC184

# E - Third Avenue

  [問題文はこちら](https://atcoder.jp/contests/abc184/tasks/abc184_e)


## 発想

　・
  


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;


int main() {

  int H, W;
  cin >> H >> W;

  vector<string> maze(H);
  vector<vector<pair<int,int>>> warp(26);

  int INF = 1e9;
  vector<vector<int>> cost(H, vector<int>(W, INF));
  deque<pair<int,int>> que;

  for (int i = 0; i < H; ++i) {
    cin >> maze[i];
    for (int j = 0; j < W; ++j) {
      char k = maze[i][j];
      if (k == 'S') {
        que.emplace_back(i,j);
        cost[i][j] = 0;
      }
      int l = k - 'a';
      if ('a' <= k && k <= 'z') {
        warp[l].push_back(make_pair(i,j));
      }
    }
  }

  vector<int> dy = {-1, 0, 1, 0};
  vector<int> dx = {0, -1, 0, 1};

  while(!que.empty()) {
    
    int h = que.front().first;
    int w = que.front().second;
    que.pop_front();
    int c = cost[h][w];
    char k = maze[h][w];
    
    if (k == 'G') {
      cout << c << endl;
      return 0;    
    }

    for (int i = 0; i < 4; ++i) {
      int nh = h + dy[i];
      int nw = w + dx[i];
      if (nh < 0 || H <= nh || nw < 0 || W <= nw) {
        continue;
      }
      if (maze[nh][nw] == '#') {
        continue;
      }
      if (cost[nh][nw] != INF) {
        continue;
      }
      cost[nh][nw] = c + 1;
      que.emplace_back(nh, nw);
    }

    if ('a' <= k && k <= 'z') {
      int l = k - 'a';
      for (int j = 0; j < int(warp[l].size()); ++j) {
        int nh = warp[l][j].first;
        int nw = warp[l][j].second;
        if (cost[nh][nw] != INF) {
          continue;
        }
        cost[nh][nw] = c + 1;
        que.emplace_back(nh, nw);
      }
      warp[l] = vector<pair<int,int>>();
    }

  }

  cout << -1 << endl;

  return 0;

}
```
