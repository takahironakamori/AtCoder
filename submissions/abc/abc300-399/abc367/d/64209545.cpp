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
  int N, M;
  cin >> N >> M;
  vector<ll> A(N);
  rep(i, N) {
    cin >> A[i];
  }

  vector<ll> s(N+1);
  rep(i, N) {
    s[i+1] = (s[i] + A[i]) % M;
  }

  int L = s[N];

  ll ans = 0;
  vector<int> cnt(M);
  rep(r, N) {
    ans += cnt[s[r]];
    ans += cnt[(s[r] - L + M) % M];
    cnt[s[r]]++;
  }

  cout << ans << endl;
  return 0;
}
