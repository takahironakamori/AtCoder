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

// 19:45

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  rep(i, N) {
    cin >> A[i];
  }

  int M;
  cin >> M;
  map<int, int> B;
  rep(i, M) {
    int b;
    cin >> b;
    B[b] = 1;
  }

  int X;
  cin >> X;

  vector<bool> dp(X + 1);
  dp[0] = true;

  for(int i = 0; i < X; i++) {
    if(dp[i] == false) {
      continue;
    }
    for(int j = 0; j < N; j++) {
      int x = i + A[j];
      if(X < x) {
        continue;
      }
      if(B[x] != 1) {
        dp[x] = true;
      }
    }
  }

  if(dp[X]) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
