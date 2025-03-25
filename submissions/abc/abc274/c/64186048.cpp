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
  vector<int> dp(N * 2 + 2);
  dp[1] = 0;
  for(int i = 1; i <= N; i++) {
    int a = A[i-1];
    dp[i*2] = dp[a] + 1;
    dp[i*2+1] = dp[a] + 1;
  }

  for(int i = 1; i <= N * 2 + 1; i++) {
    cout << dp[i] << endl;
  }
  return 0;
}
