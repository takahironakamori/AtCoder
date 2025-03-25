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
  int H, W, K;
  cin >> H >> W >> K;
  vector<string> graph(H);
  rep(i, H) {
    cin >> graph[i];
  }

  vector<int> dy = {-1, 0, 1, 0};
  vector<int> dx = {0, -1, 0, 1};

  int ans = 0;

  rep(i, H) {
    rep(j, W) {
      if(graph[i][j] == '.') {

        vector<vector<bool>> visited(H, vector<bool>(W, false));

        auto dfs = [&](auto dfs, int y, int x, int now) -> void {
          if(visited[y][x] == true) {
            return;
          }

          if(now == K) {
            ans += 1;
            return;
          }

          visited[y][x] = true;

          rep(i, 4) {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(ny < 0 || H <= ny || nx < 0 || W <= nx) {
              continue;
            }
            if(visited[ny][nx] == true || graph[ny][nx] != '.') {
              continue;
            }
            dfs(dfs, ny, nx, now + 1);
          }

          visited[y][x] = false;
        };

        dfs(dfs, i, j, 0);

      }
    }
  }

  cout << ans << endl;
  return 0;
}
