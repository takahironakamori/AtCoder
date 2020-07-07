### ARC055

# A - 数え上げ

[問題はこちら](https://atcoder.jp/contests/arc055/tasks/arc055_a)


## 発想

  数値で考えると範囲を超える可能性があるので、文字列で考える。<br>
  1を出力し、n - 1回、0を出力し、7を出力する。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  cout << 1;

  for (int i = 1; i < n; i++) {
    cout << 0;
  }

  cout << 7 << endl;

  return 0;

}
```
