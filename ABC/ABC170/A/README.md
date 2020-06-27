### ABC170

# A - Five Variables

  [https://atcoder.jp/contests/abc170/tasks/abc170_a)


## 発想

  15からx<sub>1</sub>からx<sub>5</sub>までの合計を引いたものが答えになる。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int x1, x2, x3, x4, x5;
  cin >> x1 >> x2 >> x3 >> x4 >> x5;

  int ans = 1 + 2 + 3 + 4 + 5 - x1 - x2 - x3 - x4 - x5;

  cout << ans << endl;

  return 0;

}
```
