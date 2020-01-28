### ABC153

# A - Serval vs Monster

  [問題はこちら](https://atcoder.jp/contests/abc153/tasks/abc153_a)


- 発想<br>
  H / A を切り上げで計算する。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int H, A;
    cin >> H >> A;

    cout << ceil((double) H / A) << endl;

  }
  ```
