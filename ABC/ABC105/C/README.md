### ABC105

# C - Base -2 Number

  [問題はこちら](https://atcoder.jp/contests/abc105/tasks/abc105_c)


## 発想

  -2進数は、-2の0乗(1)、-2の1乗(-2)、-2の2乗(4)、-2の3乗(-8)、-2の4乗(16)...となる。<br>
  Nが2で割り切れるときは、その桁は0になり、Nから1を引く。<br>
  Nが2で割り切れないときは、その桁は1になる。<br>
  Nが0になるまでこれを繰り返す。


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    string answer = "";

    if (N == 0) {
      answer = "0";
    } else {
      while (N != 0) {
        if (N % 2 != 0) {
          N--;
          answer = "1" + answer;
        } else {
          answer = "0" + answer;
        }
        N /= -2;
      }
    }

    cout << answer << endl;

    return 0;

  }
  ```
