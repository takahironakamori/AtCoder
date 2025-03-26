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
  int R, C;
  cin >> R >> C;

  int minY = min(R, 15 - R + 1);
  int minX = min(C, 15 - C + 1);
  int minV = min(minY, minX);

  if(minV % 2 == 1) {
    cout << "black" << endl;
  } else {
    cout << "white" << endl;
  }
  return 0;
}