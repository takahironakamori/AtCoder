#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;
using P = pair<char, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
// using mint = modint998244353;
// using mint =　modint1000000007;
// const int mod = 1000000007;
// const ll INF = 1LL << 62;
// const int INF = 1001001001;

int main() {
  ll A, M, L, R;
  cin >> A >> M >> L >> R;

  L -= A;
  R -= A;

  if(L < 0) {
    ll d = (0 - L) / M + 1;
    L += d * M;
    R += d * M;
  }

  ll r = R / M;
  ll l = (L - 1) / M;

  cout << r - l << endl;
  return 0;
}
