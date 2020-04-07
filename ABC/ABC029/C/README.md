### ABC029

# C - Brute-force Attack

  [問題はこちら](https://atcoder.jp/contests/abc029/tasks/abc029_c)


## 発想

  再帰関数(dfs）を使ってaから順番に出力する。<br>


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  void f(int count, string s) {
    if (count == 0) {
      cout << s << endl;
    } else {
      for (char i = 'a'; i <= 'c'; i++) {
        f(count - 1, s + i);
      }
    }
  }

  int main() {

    int N;
    cin >> N;

    f(N, "");

    return 0;

  }
  ```
