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
  int N;
  cin >> N;
  string S;
  cin >> S;

  ll cnt1 = 0;
  rep(i, N) {
    if(S[i] == '1') {
      cnt1++;
    }
  }

  ll ans = 0;
  ll cntR = 0;
  rep(i, N) {
    if(S[i] == '0') {
      ans += min(cntR, cnt1 - cntR);
    } else {
      cntR++;
    }
  }

  cout << ans << endl;
  return 0;
}
