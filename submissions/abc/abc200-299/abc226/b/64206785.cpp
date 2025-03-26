#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;
using P = pair<char, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
// using mint = modint998244353;
// using mint =　modint1000000007;
// const int mod = 1000000007;
// const ll INF = 1LL << 62;
// const int INF = 1001001001;

int main() {
  int N;
  cin >> N;
  vector<vector<int>> L(N);
  set<vector<int>> st;
  rep(i, N) {
    int l;
    cin >> l;
    rep(j, l) {
      int a;
      cin >> a;
      L[i].push_back(a);
    }
    st.insert(L[i]);
  }

  cout << st.size() << endl;
  return 0;
}
