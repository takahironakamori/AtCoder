#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
// using mint = modint998244353;
// using mint = modint1000000007;
// const int mod = 1000000007;
// const ll INF = 1LL << 62;
const int INF = 1001001001;

int main() {
  int H, W, D;
  cin >> H >> W >> D;
  vector<string> graph(H);
  rep(i, H) {
    cin >> graph[i];
  }

  vector<vector<int>> dist(H, vector<int>(W, INF));

  vector<int> dy = {-1, 0, 1, 0};
  vector<int> dx = {0, -1, 0, 1};

  int sy = 0;
  int sx = 0;

  queue<pair<int, int>> que;

  rep(i, H) {
    rep(j, W) {
      if(graph[i][j] == 'H') {
        que.push(make_pair(i, j));
        dist[i][j] = 0;
      }
    }
  }

  while(!que.empty()) {
    int h = que.front().first;
    int w = que.front().second;
    que.pop();
    int c = dist[h][w];

    if(D < c + 1) {
      continue;
    }

    for(int i = 0; i < 4; ++i) {
      int nh = h + dy[i];
      int nw = w + dx[i];

      if(nh < 0 || H <= nh || nw < 0 || W <= nw) {
        continue;
      }
      if(graph[nh][nw] == '#') {
        continue;
      }
      if(dist[nh][nw] != INF) {
        continue;
      }
      dist[nh][nw] = c + 1;
      que.push(make_pair(nh, nw));
    }
  }

  int ans = 0;
  rep(i, H) {
    rep(j, W) {
      if(dist[i][j] != INF) {
        ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
