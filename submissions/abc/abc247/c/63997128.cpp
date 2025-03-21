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

  auto dfs = [&](auto dfs, int current, vector<string> v) -> void {
    if(current == N) {
      int n = v.size();
      rep(i, n) {
        cout << v[i] << " ";
      }
      cout << endl;
      return;
    }

    vector<string> v2 = v;
    v2.push_back(to_string(current + 1));
    int n = v.size();
    rep(i, n) {
      v2.push_back(v[i]);
    }

    dfs(dfs, current + 1, v2);
    return;
  };

  vector<string> v;
  dfs(dfs, 0, v);
  return 0;
}
