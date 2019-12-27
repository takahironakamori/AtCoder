### ABC147

# A - Blackjack

  [問題はこちら](https://atcoder.jp/contests/abc147/tasks/abc147_a)

- 発想<br>
  a1 + a2 + a3 が 21 以下の場合は win を、<br>
  そうでない場合は、bust を出力する。
  
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;

    if (a1 + a2 + a3 <= 21) {
      cout << "win" << endl;
    } else {
      cout << "bust" << endl;
    }

  }
  ```
    