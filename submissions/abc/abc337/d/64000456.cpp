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

  int n = S.size();

  int a = 0;
  int b = 0;
  int c = 0;

  rep(i, n) {
    if(S[i] == 'A') {
      a++;
    } else if(S[i] == 'B') {
      b++;
    } else {
      c++;
    }
  }

  string s = string(a, 'A') + string(b, 'B') + string(c, 'C');
  if(s == S) {
    cout << "Yes" << endl;
    return 0;
  }

  cout << "No" << endl;
  return 0;
}
