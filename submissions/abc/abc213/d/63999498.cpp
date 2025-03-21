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

int main() {
  int N;
  cin >> N;
  vector<vector<int>> graph(N);
  rep(i, N-1) {
    int A, B;
    cin >> A >> B;
    A--;
    B--;
    graph[A].push_back(B);
    graph[B].push_back(A);
  }

  rep(i, N) {
    sort(graph[i].begin(), graph[i].end());
  }

  vector<int> ans;

  auto dfs = [&](auto dfs, int current, int prev) -> void {
    ans.push_back(current);
    for(int nxt : graph[current]) {
      if(nxt != prev) {
        dfs(dfs, nxt, current);
        ans.push_back(current);
      }
    }
  };

  dfs(dfs, 0, -1);

  for(auto item:ans) {
    cout << item + 1 << " ";
  }
  cout << endl;
  return 0;
}
