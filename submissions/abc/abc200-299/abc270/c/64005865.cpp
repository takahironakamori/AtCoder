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
// const int INF = 1001001001;

// 23:55

int main() {
  int N, X, Y;
  cin >> N >> X >> Y;
  X--;
  Y--;

  vector<vector<int>> graph(N);
  rep(i, N-1) {
    int U, V;
    cin >> U >> V;
    U--;
    V--;
    graph[U].push_back(V);
    graph[V].push_back(U);
  }

  vector<bool> visited(N);
  deque<int> ans;
  bool flg;

  auto dfs = [&](auto dfs, int current) -> void {
    if(flg == false) {
      ans.push_back(current);
    }

    if(current == Y) {
      flg = true;
    }

    visited[current] = true;
    for(auto nxt:graph[current]) {
      if(visited[nxt] == false) {
        dfs(dfs, nxt);
      }
    }

    if(flg == false) {
      ans.pop_back();
    }
  };

  dfs(dfs, X);

  while(!ans.empty()) {
    cout << ans.front() + 1 << " ";
    ans.pop_front();
  }
  cout << endl;
  return 0;
}
