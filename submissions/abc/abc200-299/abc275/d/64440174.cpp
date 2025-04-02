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

map<ll, ll> mp;

ll dfs(ll v) {
  if(v == 0) {
    return 1;
  }
  if(mp.count(v)) {
    return mp[v];
  }

  ll res = dfs(v / 2) + dfs(v / 3);
  mp[v] = res;
  return mp[v];
}

int main() {
  ll N;
  cin >> N;

  ll ans = dfs(N);
  cout << ans << endl;
  return 0;
}
