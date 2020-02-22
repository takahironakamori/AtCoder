### ABC120

# D - Decayed Bridges

  [問題はこちら](https://atcoder.jp/contests/abc120/tasks/abc120_d)

## 発想

島を頂点、橋を辺としたグラフで考える。<br>
基本的に<strong>「頂点と頂点をつなぐ」ことより、「頂点と頂点を切り離す」ことを考える方が難しい</strong>。
頂点と頂点をつないがときに、何個とつながることになるのかを計算するときに、<br>
頂点とつながっている頂点の数 × 頂点とつながっている頂点の数となるが、<br>
頂点がどのようにつながっているのかを UnionFind(Disjoint Set) で管理する。<br>


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;


class UnionFind {
  public:
    // 親の番号
    // 自分が親の場合は-(その集合のサイズ)
    vector<int> Parent;

    // 最初はParentの値をすべて -1 にしておく
    // -1 は誰ともつながっていないことを示す
    UnionFind(int N){
      Parent = vector<int>(N, -1);
    }

    // A がどのグループに属しているかを調べる
    int root(int A) {
      if (Parent[A] < 0) {
        return A;
      }
      return Parent[A] = root(Parent[A]);
    }

    // 自分のいるグループの頂点数を調べる
    int size(int A) {
      return -Parent[root(A)];
    }

    // A と B をつなぐ
    bool connect (int A, int B) {

      // A と B を直接つなぐのではなく、
      // root(A) に root(B) をつなぐ
      A = root(A);
      B = root(B);

      if (A == B) {
        // すでにつながっているので、必要ない
        return false;
      }

      // 大きい方（A）に小さい方（B）をつなぎたいので、
      // 大小関係を確認する
      if (size(A) < size(B)) {
        swap (A, B);
      }

      // A のサイズを更新する
      Parent[A] += Parent[B];

      // B の親を A に変更する
      Parent[B] = A;

      return true;
    }

};


int main() {

  int N, M;
  cin >> N >> M;

  vector<int> A(M);
  vector<int> B(M);
  for (int i = 0; i < M; i++) {
    cin >> A[i] >> B[i];
    A[i]--;
    B[i]--;
  }

  vector<long long> answer(M);

  // 全部つながっていない場合
  answer[M - 1] = (long long) N * (N - 1) / 2;

  UnionFind unionfind(N);

  for (int i = M - 1; 0 < i; i--) {

    answer[i - 1] = answer[i];

    // つながってなかったところがつながったとき
    if (unionfind.root(A[i]) != unionfind.root(B[i])) {
      answer[i - 1] -= unionfind.size(A[i]) * unionfind.size(B[i]);
      unionfind.connect(A[i], B[i]);
    }

  }

  for (int i = 0; i < M; i++) {
    cout << answer[i] << endl;
  }

  return 0;

}
```
