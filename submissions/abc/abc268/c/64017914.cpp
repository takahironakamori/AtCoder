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

  vector<int> p(N);
  rep(i, N) {
    cin >> p[i];
  }

  vector<int> cnt(N);

  rep(i, N) {
    rep(j, 3) {
      int v = (p[i] - 1 - i + j + N) % N;
      cnt[v]++;
    }
  }

  int ans = 0;
  rep(i, N) {
    ans = max(ans, cnt[i]);
  }
  cout << ans << endl;
  return 0;
}