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

// 23:16

int main() {
  int Q;
  cin >> Q;

  queue<ll> que;
  ll now = 0;
  rep(q, Q) {
    int t;
    cin >> t;
    if(t == 1) {
      que.push(now);
    } else if(t == 2) {
      ll T;
      cin >> T;
      now += T;
    } else {
      ll H;
      cin >> H;
      int ans = 0;
      while(!que.empty() && H <= (now - que.front())) {
        ans++;
        que.pop();
      }
      cout << ans << endl;
    }
  }
  return 0;
}
