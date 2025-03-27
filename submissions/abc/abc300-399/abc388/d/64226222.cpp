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

  vector<int> c(N);
  vector<int> d(N + 1);
  rep(i, N) {
    if(i != 0) {
      c[i] = c[i-1] + d[i];
      A[i] += c[i];
    }
    int v = min(A[i], N - (i + 1));
    A[i] -= v;
    d[i + 1] += 1;
    d[min(N, i + 1 + v)] -= 1;
  }

  rep(i, N) {
    cout << A[i] << " ";
  }
  cout << endl;
  return 0;
}
