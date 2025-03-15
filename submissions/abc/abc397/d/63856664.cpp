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
  ll N;
  cin >> N;

  for (ll d = 1; d * d * d < N; d++) {
    ll c = N - d * d * d;
    if(c % (3 * d) != 0) {
      continue;
    }
    c /= 3 * d;
    ll y = (sqrt(d * d + 4 * c) - d) / 2;
    if(y * y + d * y - c == 0) {
      cout << y + d << " " << y << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}
