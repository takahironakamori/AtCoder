### ABC156

# D - Bouquet

  [問題はこちら](https://atcoder.jp/contests/abc156/tasks/abc156_d)


## 発想

  答え（友達候補） = 属するグループのサイズ - 友達の数 - 自分 - ブロックの数となる。<br>
  属するグループのサイズはUnionFind木を使う。<br>
  友達の数は入力から数えることができる。<br>
  ブロックの数は配列で持っておく。<br>


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

class UnionFind {
public:
  // 親の番号
  // 自分が親の場合は-1とする
  vector<int> Parent;

  // 最初はParentの値をすべて-1にしておく
  // -1は誰ともつながっていないことを示す
  UnionFind(int N){
    Parent = vector<int>(N, -1);
  }

  // Aがどのグループに属しているかを調べる
  int root(int A)
  {
    // -1の場合は自分が親
    if (Parent[A] < 0) {
      return A;
    }

    // 自分が属する親を再帰で探す
    return Parent[A] = root(Parent[A]);
  }

  // AとBをつなぐ
  bool connect (int A, int B) {

    // AとBを直接つなぐのではなく、
    // root(A)にroot(B)をつなぐ
    A = root(A);
    B = root(B);

    if (A == B) {
      // すでにつながっているので、必要ない
      return false;
    }

    // 大きい方に小さい方をつなげる
    if (Parent[A] > Parent[B]) {
      swap(A,B);
    }

    // サイズを加える
    Parent[A] += Parent[B];

    // つなぐ
    Parent[B] = A;

    return true;
  }

  // A と B が同じグループかを返す
  bool same(int A, int B) {
    return root(A) == root(B);
  }

  // Aが属するグループのサイズを返す
  int size(int A) {
    return -Parent[root(A)];
  }

};

// 友達の数
int AB[100010];

// ブロック関係
vector<int> CD[100010];


int main() {

  int N, M, K;
  cin >> N >> M >> K;

  // 友達関係を管理するために、
  // AとBをつなぐ。
  UnionFind uf(N);
  for (int i = 0; i < M; i++) {
    int A, B;
    cin >> A >> B;
    A--;
    B--;
    AB[A]++;
    AB[B]++;
    uf.connect(A,B);
  }

  // ブロック関係を配列に入れる。
  for (int i = 0; i < K; i++) {
    int C, D;
    cin >> C >> D;
    C--;
    D--;
    CD[C].push_back(D);
    CD[D].push_back(C);
  }

  for (int i = 0; i < N; i++) {
    // 答え（友達候補） = 属するグループのサイズ - 友達の数 - 自分。
    int answer = uf.size(i) - AB[i] - 1;
    for (auto item: CD[i]) {
      // ブロック関係にあって、同じグループに属している場合は、
      // 答えからさらに1引く。
      if (uf.same(i, item)) {
        answer--;
      }
    }
    cout << answer << " ";
  }
  cout << endl;

  return 0;

}
```
