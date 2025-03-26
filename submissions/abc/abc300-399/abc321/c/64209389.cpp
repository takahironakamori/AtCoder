#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
// using mint = modint998244353;
// using mint =　modint1000000007;
// const int mod = 1000000007;
// const ll INF = 1LL << 62;
// const int INF = 1001001001;

int main() {
  int K;
  cin >> K;
  K--;

  vector<ll> ans;
  auto dfs = [&](auto dfs, int now, set<ll, greater<ll>> &st) -> void {
    if(now == 10) {
      ll res = 0;
      for(auto i:st) {
        res = res * 10 + i;
      }
      if(res != 0) {
        ans.push_back(res);
      }
      return;
    }

    st.insert(now);
    dfs(dfs, now + 1, st);
    st.erase(now);
    dfs(dfs, now + 1, st);
    return;
  };

  set<ll, greater<ll>> st;
  dfs(dfs, 0, st);
  sort(ans.begin(), ans.end());

  cout << ans[K] << endl;
  return 0;
}
