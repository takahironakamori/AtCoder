#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int, ll>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
// using mint = modint998244353;
// using mint = modint1000000007;
// const int mod = 1000000007;
// const ll INF = 1LL << 62;
// const int INF = 1001001001;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> X(M);
  rep(i, M) {
    cin >> X[i];
  }
  vector<ll> A(M);
  rep(i, M) {
    cin >> A[i];
  }

  vector<P> stones(M);
  rep(i, M) {
    stones[i] = make_pair(X[i], A[i]);
  }
  sort(stones.begin(), stones.end());

  ll sum = 0;
  rep(i, M) {
    if (sum < (ll) stones[i].first - 1) {
      cout << "-1" << endl;
      return 0;
    }
    sum += stones[i].second;
  }

  if(sum != N) {
    cout << "-1" << endl;
    return 0;
  }

  ll cnt = 0;
  rep(i, M) {
    cnt += stones[i].first * stones[i].second;
  }

  ll ans = (ll) N * (N + 1) / 2 - cnt;
  cout << ans << endl;
  return 0;
}
