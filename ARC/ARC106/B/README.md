### ARC106

# B - Values

[問題はこちら](https://atcoder.jp/contests/arc106/tasks/arc106_b)


## 発想

  


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

vector<int> r;

struct UnionFind {

  // 自身が親であれば、その集合に属する頂点数に -1 を掛けたもの
  // そうでなければ親の id
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

  UnionFind Uf(N);

  vector<long long> a(N);
  vector<long long> b(N);

  for (int i = 0; i < N; ++i) {
    cin >> a[i];
  }

  for (int i = 0; i < N; ++i) {
    cin >> b[i];
  }
  
  for (int i = 0; i < M; ++i){
    int A, B;
    cin >> A >> B;
    A -= 1;
    B -= 1;
    Uf.unite(A, B);
  }

  map<int, vector<int>> mp;
  for (int i = 0; i < N; ++i){
    int v = Uf.root(i);
    mp[v].push_back(i);
  }

  for (auto item: mp) {
    long long sumA = 0;
    long long sumB = 0;
    for (int i = 0; i < int(item.second.size()); ++i) {
      int t = item.second[i];
      sumA += a[t];
      sumB += b[t];
    }
    if (sumA != sumB) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;

  return 0;

}
```
