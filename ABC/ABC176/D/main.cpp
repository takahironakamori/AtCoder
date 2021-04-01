#include <bits/stdc++.h>
using namespace std;


int main() {

  int H, W;
  cin >> H >> W;

  int Ch, Cw;
  cin >> Ch >> Cw;

  int Dh, Dw;
  cin >> Dh >> Dw;

  Ch--;
  Cw--;
  Dh--;
  Dw--;

  vector<string> maze(H);

  // 入力を受け取る
  for (int i = 0; i < H; ++i) {
    cin >> maze[i];
  }

  int INF = 1e9;
  
  vector<vector<int>> cost(H, vector<int>(W, INF));

  deque<pair<int,int>> que;
  cost[Ch][Cw] = 0;
  que.emplace_back(Ch, Cw);

  vector<int> dy = {-1, 0, 1, 0};
  vector<int> dx = {0, -1, 0, 1};

  while(!que.empty()) {
    
    int h = que.front().first;
    int w = que.front().second;
    int c = cost[h][w];
    que.pop_front();

    for (int i = 0; i < 4; ++i) {
      int nextH = h + dy[i];
      int nextW = w + dx[i];
      if (nextH < 0 || H <= nextH || nextW < 0 || W <= nextW) {
        continue;
      }
      if (maze[nextH][nextW] == '#') {
        continue;
      }
      if (cost[nextH][nextW] <= c) {
        continue;
      }
      cost[nextH][nextW] = c;
      que.emplace_front(nextH, nextW);
    }

    for (int i = -2; i <= 2; ++i) {
      for (int j = -2; j <= 2; ++j) {
        int nextH = h + i;
        int nextW = w + j;
        if (nextH < 0 || H <= nextH || nextW < 0 || W <= nextW) {
          continue;
        }
        if (maze[nextH][nextW] == '#') {
          continue;
        }
        if (cost[nextH][nextW] <= c + 1) {
          continue;
        }
        cost[nextH][nextW] = c + 1;
        que.emplace_back(nextH, nextW);
      }
    }

  }

  int ans = cost[Dh][Dw];

  if (ans == INF) {
    ans = -1;
  }

  cout << ans << endl;

  return 0;

}