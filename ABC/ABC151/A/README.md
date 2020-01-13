### ABC151

# A - Next Alphabet

  [問題はこちら](https://atcoder.jp/contests/abc151/tasks/abc151_a)


- 発想<br>
  C\[0] でASCIIコードを得る（ int ）ことができるので、<br>
  1 加えて、char 型に戻して出力する。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string C;
    cin >> C;

    cout << char(C[0] + 1) << endl;

  }
  ```
    