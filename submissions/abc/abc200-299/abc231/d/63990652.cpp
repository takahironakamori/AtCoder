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

// 13:51

int main() {
  int N, M;
  cin >> N >> M;

  vector<vector<int>> graph(N);
  vector<bool> visited(N);
  vector<int> cnt(N);
  rep(i, M) {
    int A, B;
    cin >> A >> B;
    A--;
    B--;
    graph[A].push_back(B);
    graph[B].push_back(A);
    cnt[A]++;
    cnt[B]++;
  }

  rep(i, N) {
    if(2 < graph[i].size()) {
      cout << "No" << endl;
      return 0;
    }
  }

  bool hasLoop = false;

  auto dfs = [&](auto dfs, int current, int parent) -> void {
    if(visited[current]) {
      return;
    }
    
    visited[current] = true;
    rep(i, (int) graph[current].size()) {
      int nxt = graph[current][i];
      if(nxt == parent) {
        continue;
      }
      if(visited[nxt]) {
        hasLoop = true;
        return;
      }
      dfs(dfs, nxt, current);
    }
    return;
  };

  rep(i, N) {
    if (!visited[i]) {
      dfs(dfs, i, -1);
    }
  }

  if(hasLoop) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }
  return 0;
}