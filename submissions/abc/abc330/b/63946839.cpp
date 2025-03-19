#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;
using P = pair<char, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
// using mint = modint998244353;
// using mint =　modint1000000007;
// const int mod = 1000000007;
// const ll INF = 1LL << 62;
// const int INF = 1001001001;

int main() {
  int N, L, R;
  cin >> N >> L >> R;
  vector<int> A(N);
  rep(i, N) {
    cin >> A[i];
  }

  rep(i, N) {
    if(A[i] <= L) {
      cout << L << " ";
    } else if(R <= A[i]) {
      cout << R << " ";
    } else {
      cout << A[i] << " ";
    }
  }
  cout << endl;
  return 0;
}
