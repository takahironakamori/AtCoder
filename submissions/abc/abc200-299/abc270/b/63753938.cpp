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

// 17:14

int main() {
  int X, Y, Z;
  cin >> X >> Y >> Z;
  
  if(Y < 0) {
    X = 0 - X;
    Y = 0 - Y;
    Z = 0 - Z;
  }

  if(X < Y) {
    cout << abs(X) << endl;
  } else {
    if(Z < Y) {
      if(Z < 0) {
        cout << abs(Z * 2) + abs(X) << endl;
      } else {
        cout << abs(X) << endl;
      }
    } else {
      cout << -1 << endl;
    }
  }

  return 0;
}