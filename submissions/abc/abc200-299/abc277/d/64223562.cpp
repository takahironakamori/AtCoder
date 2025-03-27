#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using mint = modint998244353;
// using mint = modint1000000007;
// const int mod = 1000000007;
// const ll INF = 1LL << 62;
// const int INF = 1001001001;


int main() {
  int N, M;
  cin >> N >> M;

  vector<ll> A(N);
  ll sum = 0;
  rep(i, N) {
    cin >> A[i];
    sum += A[i];
  }

  sort(A.begin(), A.end());

  dsu uf(N);

  rep(i, N) {
    int j = (i + 1) % N;
    if(A[i] == A[j] || (A[i] + 1) % M == A[j]) {
      uf.merge(i, j);
    }
  }

  vector<ll> s(N);
  rep(i, N) {
    s[uf.leader(i)] += A[i];
  }

  ll mx = 0;
  rep(i, N) {
    mx = max(mx, s[i]);
  }
  cout << sum - mx << endl;
  return 0;
}