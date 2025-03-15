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

// 18:35

int main() {
  int M;
  cin >> M;
  vector<string> S(3);
  rep(i, 3) {
    cin >> S[i];
  }

  vector<int> v;

  for(int i = 0; i < 3; i++) {
    v.push_back(i);
  }

  int ans = INF;
  rep(i, 10) {
    char c = i + '0';
    do {
      int current = -1;
      for(int i = 0; i < 3; i++) {
        int t = v[i];
        current++;
        while(current < 300 && S[t][current % M] != c) {
          current++;
        }
      }

      if(current < 300) {
        ans = min(ans, current);
      }
    } while(next_permutation(v.begin(), v.end()));
  }

  if(ans == INF) {
    cout << -1 << endl;
  } else {
    cout << ans << endl;
  }
  return 0;
}
