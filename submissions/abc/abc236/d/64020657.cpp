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

// 17:20

int N;
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
  N = 2 * n;
  vector<vector<ll>> A(N, vector<ll>(N));
  for(int i = 0; i < N - 1; i++) {
    for(int j = i + 1; j < N; j++) {
      cin >> A[i][j]; 
    }
  }

  used.resize(N+1);
  createPairs();

  n = result.size();
  ll ans = 0;
  rep(i, n) {
    ll res = 0;
    for(P item: result[i]) {
      if(item.second < item.first) {
        swap(item.first, item.second);
      }
      res ^= A[item.first-1][item.second-1];
    }
    ans = max(ans, res);
  }
  cout << ans << endl;
  return 0;
}