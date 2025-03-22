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

// 16:35

int main() {
  int N;
  cin >> N;

  map<string, int> mp;
  vector<string> S(N);
  vector<string> T(N);
  int cnt = 0;
  rep(i, N) {
    cin >> S[i] >> T[i];

    int s = mp.count(S[i]);
    int t = mp.count(T[i]);
    if(s == 0) {
      mp[S[i]] = cnt;
      cnt++;
    }
    if(t == 0) {
      mp[T[i]] = cnt;
      cnt++;
    }
  }

  dsu uf(cnt+1);

  bool hasLoop = false;

  rep(i, N) {
    int u = mp[S[i]];
    int v = mp[T[i]];
    if(uf.same(u, v)) {
      hasLoop = true;
    }
    uf.merge(u, v);
  }

  if(hasLoop) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }
  return 0;
}