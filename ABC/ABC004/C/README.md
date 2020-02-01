### ABC004

# C - 入れ替え

  [問題はこちら](https://atcoder.jp/contests/abc004/tasks/abc004_3)

- 発想<br>
  N = 0 のとき、[1,2,3,4,5,6] とすると、<br>
  N = 29 のとき、[1,2,3,4,5,6] で 1 週する。<br>
  したがって、 N を 30 で割った余りだけ注目すればいい。
  また、<br>
  N = 4 のとき、[2,3,4,5,6,1] <br>
  N = 9 のとき、[3,4,5,6,1,2] <br>
  N = 14 のとき、[4,5,6,1,2,3] <br>
  N = 19 のとき、[5,6,1,2,3,4] <br>
  N = 24 のとき、[6,1,2,3,4,5] <br>
  となる。<br>
  そこで、N を 30 で割ったときの余りを 5 で割った時の商が、<br>
  上記の N = 4 から 24 のどれかになる。<br>
  上記の N = 4 から 24 のどれかをスタートの状態として、<br>
  N を 30 で割ったときの余りを 5 で割った時の余りの回数だけ、<br>
  入れ替えを行った結果が回答となる。

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    // 30 で割ったときの余り
    int count = N % 30;

    // 余りを 5 で割った商
    int a = count / 5;

    // 余りを 5 で割った余り
    int b = count % 5;

    // 30 で割った余りを 5 で割った時の
    // 商の状態（1 から 6 までの並び順）を作る
    vector<int> answer(6);
    for (int i = 0; i < 6; i++) {
      if (6 < i + 1 + a) {
        answer[i] = i + a - 5;
      } else {
        answer[i] = i + a + 1;
      }
    }

    // 30 で割った余りを 5 で割った時の
    // 余りの回数だけ入れ替える
    for (int i = 0; i < b; i++) {
      swap(answer[i + 1], answer[i]);
    }

    for (int i = 0; i < 6; i++) {
      cout << answer[i];
    }
    cout << endl;

  }
  ```
