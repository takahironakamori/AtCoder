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

/**
 * 点 p1 と点 p2 を使った正方形の座標（p3, p4）を返す
 * 前提 : p1 != p2
 */
vector<P> calcSquareUsingPoints(P p1, P p2) {
  int dy = p2.first - p1.first;
  int dx = p2.second - p1.second;
  int y3 = p2.first + dx;
  int x3 = p2.second - dy;
  int y4 = y3 - dy;
  int x4 = x3 - dx;

  vector<P> res;
  res.push_back(make_pair(y3, x3));
  res.push_back(make_pair(y4, x4));
  return res;
}


int main() {
  vector<string> S(9);

  rep(i, 9) {
    cin >> S[i];
  }

  int ans = 0;

  rep(y1, 9) {
    rep(x1, 9) {
      rep(y2, 9) {
        rep(x2, 9) {
          if(y1 == y2 && x1 == x2) { continue; }
          if(S[y1][x1] == '.' || S[y2][x2] == '.') { continue; }
          
          vector<P> res = calcSquareUsingPoints(make_pair(y1, x1), make_pair(y2, x2));

          int y3 = res[0].first;
          int x3 = res[0].second;
          int y4 = res[1].first;
          int x4 = res[1].second;

          if(y3 < 0 || 9 <= y3) { continue; }
          if(x3 < 0 || 9 <= x3) { continue; }
          if(y4 < 0 || 9 <= y4) { continue; }
          if(x4 < 0 || 9 <= x4) { continue; }

          if(y1 == y3 && x1 == x3) { continue; }
          if(y2 == y3 && x2 == x3) { continue; }
          if(y1 == y4 && x1 == x4) { continue; }
          if(y2 == y4 && x2 == x4) { continue; }
          if(y3 == y4 && x3 == x4) { continue; }

          if(S[y3][x3] == '#' && S[y4][x4] == '#') {
            ans++;
          }
        }
      }
    }
  }

  cout << ans / 4 << endl;
  return 0;
}
