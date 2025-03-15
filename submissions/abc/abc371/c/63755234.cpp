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
const int INF = 1001001001;

// 17:43

int main() {
  int N;
  cin >> N;

  int Mg;
  cin >> Mg;
  vector<set<int>> G(N);
  rep(i, Mg) {
    int u, v;
    cin >> u >> v;
    u--;
    v--;
    G[u].insert(v);
    G[v].insert(u);
  }

  int Mh;
  cin >> Mh;
  vector<set<int>> H(N);
  rep(i, Mh) {
    int u, v;
    cin >> u >> v;
    u--;
    v--;
    H[u].insert(v);
    H[v].insert(u);
  }

  vector<vector<int>> A(N, vector<int>(N));
  rep(i, N - 1) {
    for(int j = i+1; j < N; j++) {
      cin >> A[i][j];
    }
  }

  vector<int> v;

  for(int i = 0; i < N; i++) {
    v.push_back(i);
  }

  int ans = INF;

  do {
    int res = 0;

    for(int i = 0; i < N; i++) {
      for(int j = i + 1; j < N; j++) {
        int gu = v[i];
        int gv = v[j];
        int hu = i;
        int hv = j;
        if(G[gu].count(gv) == 1 && H[hu].count(hv) == 0) {
          res += A[hu][hv];
        } else if(G[gu].count(gv) == 0 && H[hu].count(hv) == 1) {
          res += A[hu][hv];
        }
      }
    }

    ans = min(ans, res);
  } while(next_permutation(v.begin(), v.end()));

  cout << ans << endl;
  return 0;
}