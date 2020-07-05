### ARC018

# A - BMI

[問題はこちら](https://atcoder.jp/contests/arc018/tasks/arc018_1)


## 発想

  BMIを逆算する。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  double H, B;
  cin >> H >> B;

  H /= 100;
  H *= H;

  double ans = B * H;

  printf("%.16f", ans);
  printf("\n");

  return 0;

}
```
