### ABC199

# D - RGB Coloring 2

  [問題文はこちら](https://atcoder.jp/contests/abc199/tasks/abc199_d)


## 発想



## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> g;
vector<int> s;
vector<bool> visited;
vector<int> color;
int c = 0;

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

// 同じ頂点を 2 度通らないDFS (深さ優先探索) をし、頂点を訪れた順に入れた配列 s を作る
void dfs1(int current) {
  s.push_back(current);
  visited[current] = true;
  for (int i = 0; i < int(g[current].size()); ++i) {
    int to = g[current][i];
    if (visited[to]) {
      continue;
    }
    dfs1(to);
  }
}

// 色を塗ってみてうまくいったら c を増やす
void dfs2(int indexS) {
  
  // s の最後まで進んだら OK
  if (indexS == int(s.size())) {
    c++;
    return;
  }
  
  // 3 色をセット
  set<int> st;
  st.insert(1);
  st.insert(2);
  st.insert(3);

  // 使っている色を削除
  int current = s[indexS];
  for (int i = 0; i < int(g[current].size()); ++i) {
    st.erase(color[g[current][i]]);
  }

  // 残っている色を全パターン試す
  for (auto item : st) {
    color[current] = item;
    dfs2(indexS + 1);
    color[current] = 0;
  }

}

int main() {
  
  int N, M;
  cin >> N >> M;

  // 準備
  UnionFind Uf(N+5);
  g.resize(N);
  visited.resize(N);
  color.resize(N);

  for (int i = 0; i < M; ++i){
    int A, B;
    cin >> A >> B;
    A -= 1;
    B -= 1;
    Uf.unite(A, B);
    g[A].push_back(B);
    g[B].push_back(A);
  }

  long long ans = 1;
  
  for (int i = 0; i < N; ++i) {
    if (Uf.root(i) != i) {
      continue;
    }
    s.clear();
    c = 0;
    dfs1(i);
    dfs2(0);
    ans *= c;
  }

  cout << ans << endl;
  return 0;
}
```
