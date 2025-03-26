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
  int H, W;
  cin >> H >> W;
  vector<string> graph(H);
  rep(i, H) {
    cin >> graph[i];
  }

  int sy = 0;
  int sx = 0;
  int gy = 0;
  int gx = 0;

  rep(i, H) {
    rep(j, W) {
      if(graph[i][j] == 'S') {
        sy = i;
        sx = j;
      }
      if(graph[i][j] == 'G') {
        gy = i;
        gx = j;
      }
    }
  }

  vector<int> dyH = {1, -1};
  vector<int> dxH = {0, 0};

  vector<int> dyW = {0, 0};
  vector<int> dxW = {1, -1};

  int ans = INF;
  vector<vector<int>> dist(H, vector<int>(W));
  rep(k, 2) {
    string dir = "H";
    if(k == 1) {
      dir = "W";
    }

    rep(i, H) {
      rep(j, W) {
        dist[i][j] = INF;
      }
    }

    queue<pair<P, string>> que;
    que.push(make_pair(make_pair(sy, sx), dir));
    dist[sy][sx] = 0;

    while(!que.empty()) {
      int h = que.front().first.first;
      int w = que.front().first.second;
      string dir = que.front().second;
      que.pop();
      int c = dist[h][w];

      if(w == gx && h == gy) {
        ans = min(ans, dist[gy][gx]);
        break;
      }

      for(int i = 0; i < 2; ++i) {
        int nh = h;
        int nw = w;
        string ndir = "";

        if(dir == "H") {
          ndir = "W";
          nh += dyW[i];
          nw += dxW[i];
        } else {
          ndir = "H";
          nh += dyH[i];
          nw += dxH[i];
        }

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
        que.push(make_pair(make_pair(nh, nw), ndir));
      }
    }
  }

  if(ans == INF) {
    cout << -1 << endl;
  } else {
    cout << ans << endl;
  }
  return 0;
}
