### ABC168

# A - ∴ (Therefore)

  [問題はこちら](https://atcoder.jp/contests/abc168/tasks/abc168_a)


## 発想

  Nの1の位を求める。<br>
  1の位に応じて結果を出力する。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  N %= 10;

  if (N == 2 || N == 4 || N == 5 || N == 7 || N == 9) {
    cout << "hon" << endl;
  } else if (N == 0 || N == 1 || N == 6 || N == 8) {
    cout << "pon" << endl;
  } else {
    cout << "bon" << endl;
  }

  return 0;

}
```
