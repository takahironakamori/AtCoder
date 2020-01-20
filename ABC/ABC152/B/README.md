### ABC152

# B - Comparing Strings

  [問題はこちら](https://atcoder.jp/contests/abc152/tasks/abc152_b)


- 発想<br>
  整数で受け取った a と b について、文字列にしたものを用意する。<br>
  これらを使って、文字列を作って、文字列を比較して小さい方を出力する。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int a, b;
    cin >> a >> b;

    string A_ = to_string(a);
    string B_ = to_string(b);

    string A = "";
    for (int i = 0; i < b; i++) {
      A += A_;
    }

    string B = "";
    for (int i = 0; i < a; i++) {
      B += B_;
    }

    if (A < B) {
      cout << A << endl;
    } else {
      cout << B << endl;
    }

  }
  ```
    