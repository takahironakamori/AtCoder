### ARC002

# A - うるう年

  [https://atcoder.jp/contests/arc002/tasks/arc002_1)


## 発想

  規則に合わせて分岐させる。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int Y;
  cin >> Y;

  string ans = "NO";

  if (Y % 4 == 0) {
    if (Y % 100 == 0) {
      if (Y % 400 == 0) {
        ans = "YES";
      }
    } else {
      ans = "YES";
    }
  }

  cout << ans << endl;

  return 0;

}
```
