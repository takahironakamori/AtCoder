### ABC155

# D - Pairs

  [問題はこちら](https://atcoder.jp/contests/abc155/tasks/abc155_d)


## 発想

  [詳しくはこちら](https://note.com/tak_nakamori/n/n78a5ad8330aa)


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  long long N, K;

  vector<long long> A;


  bool f(long long x) {

    // x未満を作ることができるペアの数を数える
    long long count = 0;
    for (int i = 0; i < N; i++) {

      if (0 <= A[i]) {

        // 全部 OK なら N - 1 個となる
        // 正の場合は、l が OK、r がダメ側
        int l = -1;
        int r = N;

        // border の範囲を二分探索で狭めていく
        while (l + 1 < r) {
          int border = (l + r) / 2;
          // 自分自身と自分自身のペアや、重複するペアも見る
          // x未満だったら、lをずらす
          // x未満じゃなかったら、rをずらす
          if (A[border] * A[i] < x) {
            l = border;
          } else {
            r = border;
          }
        }

        // 正の場合は境界より左側
        count += r;

      } else {

        // 負の場合は、l がダメ側、r が OK
        int l = -1;
        int r = N;

        // border の範囲を二分探索で狭めていく
        while (l + 1 < r) {
          int border = (l + r) / 2;
          // 自分自身と自分自身のペアや、重複するペアも見る
          // x未満だったら、rをずらす
          // x未満じゃなかったら、lをずらす
          if (A[border] * A[i] < x) {
            r = border;
          } else {
            l = border;
          }
        }

        // 負の場合は境界より右側
        count += N - r;

      }

      // 自分自身と自分自身のペアを引く
      if (A[i] * A[i] < x) {
        count--;
      }

    }

    // 半分は重複しているペアなので半分にする
    count /= 2;

    return count < K;
  }

  int main() {

    // 無限
    long long INF = (long long) (1e18)+1;

    cin >> N >> K;

    A.resize(N);
    for (int i = 0; i < N; i++) {
      cin >> A[i];
    }

    sort(A.begin(), A.end());

    // 左端
    long long l = - INF;

    // 右端
    long long r = INF;

    // xの範囲を二分探索で狭めていく
    while (l + 1 < r) {

      // 左端と右端の中央
      long long x = (l + r) / 2;

      // x未満を作ることができるペアがk個未満か否か
      bool flg = f(x);

      // x未満を作ることができる場合は、lをずらす
      // x未満を作ることができない場合は、rをずらす
      if (flg) {
        l = x;
      } else {
        r = x;
      }

    }

    cout << l << endl;

    return 0;

  }
  ```
