### ABC152

# A - AC or WA

  [問題はこちら](https://atcoder.jp/contests/abc152/tasks/abc152_a)


- 発想<br>
  N と M が同じなら、Yes を<br>
  そうでない場合は No を出力する。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, M;
    cin >> N >> M;

    if (N == M) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }

  }
  ```
    