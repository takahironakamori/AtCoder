### ABC149

# C - Next Prime

  [問題はこちら](https://atcoder.jp/contests/abc149/tasks/abc149_c)


## 発想<br>
  X, X+1, X+2 ... と素数が見つかるまで繰り返す。<br>
  素数が見つかったらその数が答え。


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  bool is_prime(long N) {
    for (long i = 2; i * i <= N; i++) {
      if (N % i == 0) {
        return false;
      }
    }
    return N != 1;
  }

  int main() {

    int X;
    cin >> X;

    bool flg = false;

    while (flg == false) {
      flg = is_prime(X);
      if (!flg) {
        X++;
      }
    }

    cout << X << endl;

    return 0;

  }
  ```
