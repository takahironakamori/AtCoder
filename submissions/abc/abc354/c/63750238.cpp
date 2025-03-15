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

// 15:43

// 比較関数
bool cmp(const tuple<int, int, int>& a, const tuple<int, int, int>& b) {
  int pa = get<1>(a);
  int pb = get<1>(b);
  if(pa < pb) {
    return true;
  }
  return false;
}


int main() {
  int N;
  cin >> N;

  // y, x, id
  vector<tuple<int, int, int>> cards(N);
  rep(i, N) {
    int A, C;
    cin >> A >> C;
    cards[i] = make_tuple(A, C, i+1);
  }

  sort(cards.begin(), cards.end(), cmp);

  int mxY = 0;
  set<int> ans;
  rep(i, N) {
    int ny = get<0>(cards[i]);
    if(mxY < ny) {
      ans.insert(get<2>(cards[i]));
      mxY = ny;
    }
  }

  cout << (int) ans.size() << endl;
  for(auto item:ans) {
    cout << item << " ";
  }
  cout << endl;
  return 0;
}