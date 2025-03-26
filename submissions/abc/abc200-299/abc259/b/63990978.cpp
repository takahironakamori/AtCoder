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

// 14:42

int main() {
  int a, b, d;
  cin >> a >> b >> d;

  double d2 = d * M_PI / 180;

  double x = a * cos(d2) - b * sin(d2);
  double y = a * sin(d2) + b * cos(d2);

  printf("%.12f", x);
  cout << " ";
  printf("%.12f", y);
  cout << endl;
  return 0;
}
