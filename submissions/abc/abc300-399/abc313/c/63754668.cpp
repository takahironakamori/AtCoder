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

// 17:35

int main() {
  int N;
  cin >> N;
  vector<ll> A(N);
  ll sum = 0;
  rep(i, N) {
    cin >> A[i];
    sum += A[i];
  }

  sort(A.begin(), A.end());

  ll av = sum / N;
  ll r = sum % N;
  
  vector<ll> t(N);
  rep(i, N) {
    t[i] = av;
  }

  rep(i, r) {
    t[N - 1 - i]++;
  }

  ll ans = 0;
  rep(i, N) {
    if(A[i] < t[i]) {
      ans += t[i] - A[i];
    }
  }

  cout << ans << endl;
  return 0;
}