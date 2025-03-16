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

// a と b の最大公約数を返す
ll gcd(ll a, ll b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}

int main() {
  int T;
  cin >> T;
  rep(t, T) {
    ll N, D, K;
    cin >> N >> D >> K;

    ll g = gcd(N, D);
    ll n = N / g;
    ll ans = (K - 1) / n + ((K - 1) * D) % N;
    cout << ans << endl;
  }
  return 0;
}