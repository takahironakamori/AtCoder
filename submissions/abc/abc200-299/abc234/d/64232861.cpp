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

// 23:35

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> P(N);
  rep(i, N) {
    cin >> P[i];
  }

  priority_queue<int, vector<int>, greater<int>> que;
  rep(i, K) {
    que.push(P[i]);
  }

  cout << que.top() << endl;

  for(int i = K; i < N; i++) {
    int v = que.top();
    if(v < P[i]) {
      que.pop();
      que.push(P[i]);
    }
    cout << que.top() << endl;
  }
  return 0;
}
