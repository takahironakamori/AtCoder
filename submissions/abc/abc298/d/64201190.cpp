#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using mint = modint998244353;
// using mint = modint1000000007;
// const int mod = 1000000007;
// const ll INF = 1LL << 62;
// const int INF = 1001001001;


int main() {
  int Q;
  cin >> Q;
  
  deque<int> S;
  S.push_back(1);
  mint ans = 1;

  rep(q, Q) {
    int t;
    cin >> t;
    if(t == 1) {
      int x;
      cin >> x;
      S.push_back(x);
      ans = ans * mint(10) + mint(x);
    } else if(t == 2) {
      ans = ans - mint(10).pow(S.size() - 1) * mint(S.front());
      S.pop_front();
    } else {
      cout << ans.val() << endl;
    }
  }
  return 0;
}