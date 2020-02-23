### ABC156

# A - Beginner

  [問題はこちら](https://atcoder.jp/contests/abc156/tasks/abc156_a)


## 発想

  Nが10未満のときは、(10 - K) × 100をRに加えたものを出力する。<br>
  Nが10を超えるときは、Rをそのまま出力する。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, R;
  cin >> N >> R;

  if (N < 10) {
    int K = (10 - N) * 100;
    cout << R + K << endl;
  } else {
    cout << R << endl;
  }
  return 0;

}
```
