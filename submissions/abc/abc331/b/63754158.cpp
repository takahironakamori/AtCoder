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
const int INF = 1001001001;

// 17:23

int main() {
  int N, S, M, L;
  cin >> N >> S >> M >> L;

  int ans = INF;

  rep(i, 101) {
    rep(j, 101) {
      rep(k, 101) {
        int cnt = i * 6 + j * 8 + k * 12;
        if(N <= cnt) {
          int res = i * S + j * M + k * L;
          ans = min(ans, res);
        }
      }
    }
  }

  cout << ans << endl;
  return 0;
}