### ARC020

# A - 石を滑らせるゲーム

[問題はこちら](https://atcoder.jp/contests/arc020/tasks/arc020_1)


## 発想

  絶対値で小さい方が勝ち。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int A, B;
  cin >> A >> B;

  if (abs(A) == abs(B)) {
    cout << "Draw" << endl;
  } else if (abs(A) < abs(B)) {
    cout << "Ant" << endl;
  } else {
    cout << "Bug" << endl;
  }

  return 0;

}
```
