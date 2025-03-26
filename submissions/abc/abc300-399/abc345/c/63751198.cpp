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

// 16:01


int main() {
  string S;
  cin >> S;

  ll n = (ll) S.size();
  ll total = n * n;

  vector<ll> cnt(26);
  rep(i, n) {
    int v = (int) S[i] - 'a';
    cnt[v]++;
  }

  rep(i, 26) {
    total -= cnt[i] * cnt[i];
  }

  ll ans = total / 2;

  if(ans == 0) {
    cout << 1 << endl;
  } else {
    cout << ans << endl;
  }
  return 0;
}