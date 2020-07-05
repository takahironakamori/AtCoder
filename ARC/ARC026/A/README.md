### ARC026

# A - ダイナミックなポーズ

[問題はこちら](https://atcoder.jp/contests/arc026/tasks/arc026_1)


## 発想

  Bを選択する回数は、Nと5で小さい方。<br>
  Aを選択する回数は、0とN-Bを選択する回数の大きい方。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, A, B;
  cin >> N >> A >> B;

  int countB = min(N, 5);
  int countA = max(0, N - countB);

  int ans = B * countB + A * countA;
  cout << ans << endl;

  return 0;

}
```
