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


string binary(ll v) {
  string result = "";
  for(int i = 0; 0 < v; i++) {
    result += to_string(v % 2);
    v = v / 2;
  }
  reverse(result.begin(), result.end());
  return result;
}


int popcount(ll v) {
  int res = 0;
  string str = binary(v);
  rep(i, (int) str.size()) {
    if(str[i] == '1') {
      res++;
    }
  }
  return res;
}


ll f1(string v, int n) {
  ll res = 0;
  rep(i, int(v.size())) {
    int c = int(v[i] - '0');
    res = res * (ll) n + (ll) c;
  }
  return res;
}


int main() {
  ll a, b, C;
  cin >> a >> b >> C;

  string strC = binary(C);
  string str_;
  str_.resize(60 - (int) strC.size(), '0');
  strC = str_ + strC;
  
  int cntTotal = a + b;
  int cntA = popcount(C);
  int cntB = cntTotal - cntA;

  if(cntB < 0 || cntB % 2 != 0) {
    cout << -1 << endl;
    return 0;
  }

  cntB = cntB / 2;

  if(60 < cntB + cntA) {
    cout << -1 << endl;
    return 0;
  }
  
  string resA;
  string resB;
  resA.resize(60, '0');
  resB.resize(60, '0');

  int rA = a - cntB;
  int rB = b - cntB;

  for(int i = 59; 0 <= i; i--) {
    if(strC[i] == '0' && 0 < cntB) {
      resA[i] = '1';
      resB[i] = '1';
      cntB--;
    } else if(strC[i] == '1') {
      if(0 < rA) {
        resA[i] = '1';
        rA--;
      } else if(0 < rB) {
        resB[i] = '1';
        rB--;
      }
    }
  }

  if(0 < cntB || 0 < rA || 0 < rB) {
    cout << -1 << endl;
    return 0;
  }

  // cout << resA << " " << resB << endl;
  cout << f1(resA, 2) << " " << f1(resB ,2) << endl;
  return 0;
}