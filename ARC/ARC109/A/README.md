### ARC109

# A - Hands

[問題はこちら](https://atcoder.jp/contests/arc109/tasks/arc109_a)


## 発想

  


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;


int main() {
  
  int a, b, x, y;
  cin >> a >> b >> x >> y;

  int ans = 0;
  
  if (a == b) {
    ans = x;
  } else if (a < b) {
    if (y < 2 * x) {
      ans = (b - a) * y + x;
    } else {
      ans = (b - a) * 2 * x + x;
    }
  } else {
    if (y < 2 * x) {
      ans = (a - b - 1) * y + x;
    } else {
      ans = (a - b - 1) * 2 * x + x;
    }
  }

  cout << ans << endl;

  return 0;
}
```
