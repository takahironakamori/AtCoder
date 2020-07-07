### ARC037

# A - 全優

[問題はこちら](https://atcoder.jp/contests/arc037/tasks/arc037_a)


## 発想

  80 - 各科目の得点が0より大きい場合は、差を加える。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  int ans = 0;
  for (int i = 0; i < N; i++) {
    int m;
    cin >> m;
    ans += max(0, 80 - m);
  }

  cout << ans << endl;
  return 0;

}
```
