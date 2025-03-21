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
  vector<int> A(N);
  rep(i, N) {
    cin >> A[i];
  }

  ll mn = 0;
  ll current = 0;
  rep(i, N) {
    current += A[i];
    mn = min(mn, current);
  }

  cout << current + abs(mn) << endl;
  return 0;
}
