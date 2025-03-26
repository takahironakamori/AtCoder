#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
// using mint = modint998244353;
// using mint =　modint1000000007;
// const int mod = 998244353;
const ll INF = 1LL << 62;
// const int INF = 1001001001;

int main() {
  int N;
  ll A, B;
  cin >> N >> A >> B;
  vector<ll> D(N);
  rep(i, N) {
    cin >> D[i];
  }

  vector<ll> res(N);
  rep(i, N) {
    res[i] = D[i] % (A + B);
  }

  sort(res.begin(), res.end());

  rep(i, N) {
    res.push_back(res[i] + (A + B));
  }

  rep(i, N) {
    ll l = res[i];
    ll r = res[i + N - 1];
    if(r - l + 1 <= A) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}
