#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using mint = modint998244353;
// using mint = modint1000000007;
// const int mod = 1000000007;
// const ll INF = 1LL << 62;
// const int INF = 1001001001;


int main() {
  ll Sx, Sy, Tx, Ty;
  cin >> Sx >> Sy >> Tx >> Ty;

  if((Sx + Sy) % 2 == 1) {
    Sx--;
  }

  if((Tx + Ty) % 2 == 1) {
    Tx--;
  }

  ll x = abs(Sx - Tx);
  ll y = abs(Sy - Ty);

  ll ans = 0;

  if(x < y) {
    ans = y;
  } else {
    ans = (x + y) / 2;
  }

  cout << ans << endl;
  return 0;
}