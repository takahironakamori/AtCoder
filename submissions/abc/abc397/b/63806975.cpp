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
  string S;
  cin >> S;

  int ans = 0;
  int n = S.size();

  bool flg = true;
  rep(i, n) {
    if(S[i] == 'i') {
      if(flg) {
        if(i % 2 == 1) {
          ans++;
          flg = false;
        }
      } else {
        if(i % 2 == 0) {
          ans++;
          flg = true;
        }
      }
    } else {
      if(flg == true) {
        if(i % 2 == 0) {
          ans++;
          flg = false;
        }
      } else {
        if(i % 2 == 1) {
          ans++;
          flg = true;
        }
      }
    }
  }

  if(S[n-1] == 'i') {
    ans++;
  }

  cout << ans << endl;
  return 0;
}
