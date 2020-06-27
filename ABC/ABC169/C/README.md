### ABC169

# C - Multiplication 3

  [問題はこちら](https://atcoder.jp/contests/abc169/tasks/abc169_c)


## 発想

  小数点の扱いが難しいので、Bを100倍してからAと掛け算し、結果を100で割る。

## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  long long A;
  double B;
  cin >> A >> B;

  int B2 = round(B * 100);

  long long ans = A * B2 / 100;

  cout << ans << endl;

}
```
