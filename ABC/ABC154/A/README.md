### ABC154

# A - Remaining Balls

  [問題はこちら](https://atcoder.jp/contests/abc154/tasks/abc154_a)


- 発想<br>
  S と U が同じなら A から 1 引いて、<br>
  T と U が同じなら B から 1 引く。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string S, T;
    cin >> S >> T;

    int A, B;
    cin >> A >> B;

    string U;
    cin >> U;

    if (U == S) {
      A--;
    }

    if (U == T) {
      B--;
    }

    cout << A << " " << B << endl;

    return 0;

  }

  ```
