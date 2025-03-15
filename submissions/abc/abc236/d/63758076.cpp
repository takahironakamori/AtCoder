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

// 19:30

int N;
vector<vector<ll>> A;
vector<bool> used;
vector<P> pairs;
vector<vector<P>> result;

void createPairs() {
  if((int)pairs.size() == N / 2) {
    result.push_back(pairs);
    return;
  }
  int l = 0;
  for(int i = 1; i <= N; ++i) {
    if(!used[i]) {
      l = i;
      break;
    }
  }
  used[l] = true;
  for(int i = 1; i <= N; ++i) {
    if(!used[i]) {
      pairs.push_back(make_pair(l, i));
      used[i] = true;
      createPairs();
      used[i] = false;
      pairs.pop_back();
    }
  }
  used[l] = false;
  return;
}

int main() {
  int n;
  cin >> n;
  A.resize(2*n, vector<ll>(2*n));
  rep(i, 2 * n - 1) {
    for(int j = i + 1; j < 2 * n; j++) {
      cin >> A[i][j];
    }
  }

  used.resize(2 * n + 1);
  N = 2 * n;
  createPairs();

  n = result.size();
  ll ans = 0;
  rep(i, n) {
    ll res = 0;
    for(P item: result[i]) {
      int a = item.first - 1;
      int b = item.second - 1;
      if(item.second < item.first) {
        swap(a, b);
      }
      res ^= A[a][b];
    }
    ans = max(ans, res);
  }

  cout << ans << endl;
  return 0;
}
