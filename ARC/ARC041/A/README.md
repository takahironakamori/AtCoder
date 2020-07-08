### ARC041

# A - コインの反転

[問題はこちら](https://atcoder.jp/contests/arc041/tasks/arc041_a)


## 発想

  y と k との関係で状況が変わる。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int x, y, k;
  cin >> x >> y >> k;

  if (y == k) {
    x = x + y;
  } else if (y < k) {
    x = x + y - (k - y);
  } else {
    x = x + k;
  }

  cout << x << endl;
  return 0;

}
```
