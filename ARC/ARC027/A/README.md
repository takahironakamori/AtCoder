### ARC027

# A - 門限

[問題はこちら](https://atcoder.jp/contests/arc027/tasks/arc027_1)


## 発想

  18時との差を計算する。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int h, m;
  cin >> h >> m;

  int hour = max(0, 17 - h);
  int minute = 60 - m;

  int ans = hour * 60 + minute;
  cout << ans << endl;

  return 0;

}
```
