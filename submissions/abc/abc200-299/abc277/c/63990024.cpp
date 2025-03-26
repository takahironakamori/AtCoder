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

// 13:17

int main() {
  int N;
  cin >> N;

  map<int, vector<int>> graph;
  set<int> visited;

  rep(i, N) {
    int A, B;
    cin >> A >> B;
    A--;
    B--;
    graph[A].push_back(B);
    graph[B].push_back(A);
  }

  auto dfs = [&](auto dfs, int current) -> void {
    if(visited.count(current) == 1) {
      return;
    }

    visited.insert(current);

    int n = graph[current].size();
    rep(i, n) {
      int nxt = graph[current][i];
      dfs(dfs, nxt);
    }
  };

  dfs(dfs, 0);
  
  cout << *visited.rbegin() + 1 << endl;
  return 0;
}