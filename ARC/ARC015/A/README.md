### ARC015

# A - Celsius と Fahrenheit

[問題はこちら](https://atcoder.jp/contests/arc015/tasks/arc015_1)


## 発想

  小数点で計算する。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  double ans = (double) 9 / 5 * n + 32;

  printf("%.16f", ans);
  printf("\n");
  return 0;

}
```
