### ARC011

# A - 鉛筆リサイクルの新技術

[問題はこちら](https://atcoder.jp/contests/arc011/tasks/arc011_1)


## 発想

  再利用して作った鉛筆と再利用できなかった鉛筆の数に気を付ける。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int m, n, N;
  cin >> m >> n >> N;

  int ans = 0;
  int a = 0;

  bool flg = true;

  while (flg) {
    ans += N;
    a += N % m;
    N = (N / m) * n;
    if (m <= a) {
      N += a / m * n;
      a = a % m;
    }
    if (N + a < m) {
      flg = false;
    }
  }

  ans += N;

  cout << ans << endl;
  return 0;

}
```
