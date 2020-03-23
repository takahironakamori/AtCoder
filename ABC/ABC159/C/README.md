### ABC159

# C - Maximum Volume

  [問題はこちら](https://atcoder.jp/contests/abc159/tasks/abc159_c)


## 発想

  立方体にするのが最も体積が大きくなる。
  したがって、L / 3 を3回掛ける。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int L;
  cin >> L;

  double l = (double) L / 3;

  double answer = l * l * l;

  cout << setprecision(16) << answer << endl;

  return 0;

}
```
