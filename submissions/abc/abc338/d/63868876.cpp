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
const ll INF = 1LL << 62;
// const int INF = 1001001001;

int main() {
  int N, M;
  cin >> N >> M;
  vector<ll> X(M);
  rep(i, M) {
    cin >> X[i];
    X[i]--;
  }
  
  vector<ll> sum(N+1);

  auto dist = [&](int from, int to) {
    if(from <= to) {
      return to - from;
    } else {
      return to + N - from;
    }
  };

  auto add = [&](int from, int to, int v) {
    if(from <= to) {
      sum[from] += v;
      sum[to] -= v;
    } else {
      sum[from] += v;
      sum[N] -= v;
      sum[0] += v;
      sum[to] -= v;
    }
  };

  rep(i, M-1) {
    add(X[i], X[i+1], dist(X[i+1], X[i]));
    add(X[i+1], X[i], dist(X[i], X[i+1]));
  }

  ll ans = INF;
  rep(i, N) {
    sum[i + 1] += sum[i];
    ans = min(ans, sum[i]);
  }
  cout << ans << endl;
  return 0;
}