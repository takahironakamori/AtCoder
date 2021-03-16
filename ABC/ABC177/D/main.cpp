#include <bits/stdc++.h>
using namespace std;


struct UnionFind {

  // 自身が親であれば、その集合に属する頂点数に -1 を掛けたもの
  // そうでなければ親の id
  vector<int> r;

  UnionFind(int N) {
    r = vector<int>(N, -1);
  }

  int root(int x) {
    if (r[x] < 0) {
      return x;
    }
    return r[x] = root(r[x]);
  }

  bool unite(int x, int y) {
    x = root(x);
    y = root(y);
    if (x == y) {
      return false;
    }
    if (r[x] > r[y]) {
      swap(x, y);
    }
    r[x] += r[y];
    r[y] = x;
    return true;
  }

  int size(int x) {
    return -r[root(x)];
  }

};


int main() {
  
  int N, M;
  cin >> N >> M;

  // 準備
  UnionFind Uf(N);

  for (int i = 0; i < M; ++i){
    int A, B;
    cin >> A >> B;
    A -= 1;
    B -= 1;
    Uf.unite(A, B);
  }

  int ans = 0;
  
  for (int i = 0; i < N; ++i) {
    ans = max(ans, Uf.size(i));
  }

  cout << ans << endl;

}