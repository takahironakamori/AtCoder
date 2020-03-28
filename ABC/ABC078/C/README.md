### ABC078

# C - HSI

  [問題はこちら](https://atcoder.jp/contests/abc078/tasks/arc085_a)


## 発想

  1回答えるのに必要な時間は1900 × M + 100 × (N - M)となる。<br>
  1-pの確率で失敗したときに、再度1900 × M + 100 × (N - M)必要になる<br>
  したがって、期待値は(1900 × M + 100 × (N - M)) * 2のM乗となる。


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, M;
    cin >> N >> M;

    int answer = (1900 * M + 100 * (N - M)) * pow(2, M);

    cout << answer << endl;

    return 0;

  }
  ```
