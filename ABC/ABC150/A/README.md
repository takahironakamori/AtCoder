### ABC150

# A - 500 Yen Coins

  [問題はこちら](https://atcoder.jp/contests/abc150/tasks/abc150_a)


- 発想<br>
  X ≦ K × 500 のときは Yes を、<br>
  そうでない場合は NO を出力する。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int K, X;
    cin >> K >> X;

    if (X <= K * 500) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }

  }
  ```
    