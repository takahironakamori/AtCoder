### ARC025

# A - ゴールドラッシュ

[問題はこちら](https://atcoder.jp/contests/arc025/tasks/arc025_1)


## 発想

  7日間のうち多い方を足し合わせる。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  vector<int> D(7);
  vector<int> J(7);

  for (int i = 0; i < 7; i++) {
    cin >> D[i];
  }

  for (int i = 0; i < 7; i++) {
    cin >> J[i];
  }

  int ans = 0;

  for (int i = 0; i < 7; i++) {
    ans += max(D[i], J[i]);
  }

  cout << ans << endl;

  return 0;

}
```
