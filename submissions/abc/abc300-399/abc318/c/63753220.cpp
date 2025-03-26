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

// 16:39


int main() {
  int N;
  ll D, P;
  cin >> N >> D >> P;
  vector<ll> F(N);
  rep(i, N) {
    cin >> F[i];
  }

  sort(F.begin(), F.end());

  vector<ll> sum(N+1);
  rep(i, N+1) {
    if(i == 0) { continue;}
    sum[i] = sum[i-1] + F[i-1];
  }

  sort(sum.rbegin(),sum.rend());
  
  ll ans = sum[0];

  rep(i, N) {
    ll cnt = (ll) (i + D) / D;
    ll res = sum[i+1] + cnt * P;
    ans = min(ans, res);
  }

  cout << ans << endl;
  return 0;
}