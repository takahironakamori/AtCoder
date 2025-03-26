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
const ll INF = 1LL << 62;
// const int INF = 1001001001;

int main() {
  ll D;
  cin >> D;
  ll ans = INF;
  for(ll x = 0; x * x <= D; x++) {
    ll v = (x * x) - D;
    if(0 <= v) {
      ans = min(ans, v);
    } else {
      v = abs(v);
      ll y1 = sqrt(v);
      ll res1 = abs(x * x + y1 * y1 - D);
      ll res2 = abs(x * x + (y1 + 1) * (y1 + 1) - D);
      ll res = min(res1, res2);
      ans = min(ans, res);
    }
  }
  cout << ans << endl;
  return 0;
}
