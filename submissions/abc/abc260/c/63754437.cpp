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

// 17:29

int main() {
  int N;
  ll X, Y;
  cin >> N >> X >> Y;

  vector<ll> reds(N+1);
  vector<ll> blues(N+1);
  
  reds[N] = 1;

  for(int i = N; 1 < i; i--) {
    reds[i-1] += reds[i];
    blues[i] += X * reds[i];
    reds[i] = 0;
    reds[i-1] += blues[i];
    blues[i-1] += blues[i] * Y;
    blues[i] = 0;
  }

  cout << blues[1] << endl;
  return 0;
}