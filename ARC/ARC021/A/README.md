### ARC021

# A - DEAD END

[問題はこちら](https://atcoder.jp/contests/arc021/tasks/arc021_1)


## 発想

  左右で同じ数字があれば、CONTINUE。
  上下で同じ数字があれば、CONTINUE。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int A[4][4];
  string ans = "GAMEOVER";
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      cin >> A[i][j];
      if (j != 0) {
        if (A[i][j-1] == A[i][j]) {
          ans = "CONTINUE";
        }
      }
    }
  }

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if (j != 0) {
        if (A[j-1][i] == A[j][i]) {
          ans = "CONTINUE";
        }
      }
    }
  }

  cout << ans << endl;
  return 0;

}
```
