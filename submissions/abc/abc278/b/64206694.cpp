#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
// using mint = modint998244353;
// using mint =　modint1000000007;
// const int mod = 1000000007;
// const ll INF = 1LL << 62;
// const int INF = 1001001001;

int main() {
  int H, M;
  cin >> H >> M;

  for(int i = 0; i < 25; i++) {
    for(int j = 0; j < 60; j++) {
      int a = i / 10;
      int b = i % 10;
      int c = j / 10;
      int d = j % 10;
      if(24 == i) {
        a = 0;
        b = 0;
      }
      int h = a * 10 + c;
      int m = b * 10 + d;
      if(0 <= h && h < 24 && 0 <= m && m < 60) {
        if(H < i || (H == i && M <= j)) {
          if(24 == i) {
            cout << 0 << " " << j << endl;
          } else {
            cout << i << " " << j << endl;
          }
          return 0;
        }
      }
    }
  }
  return 0;
}
