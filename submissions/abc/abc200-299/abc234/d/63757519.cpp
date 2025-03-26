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

// 18:58

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

  int current = 0;
  for(int i = 0; i + K - 1 < N; i++) {
    if(i == 0) {
      current = que.top();
    } else {
      if(current < P[K + i - 1]) {
        que.pop();
        que.push(P[K + i - 1]);
        current = que.top();
      }
    }
    cout << current << endl;
  }

  return 0;
}
