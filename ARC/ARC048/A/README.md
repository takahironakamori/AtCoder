### ARC048

# A - 階段の下

[問題はこちら](https://atcoder.jp/contests/arc048/tasks/arc048_a)


## 発想

  0階は無いという点に注意しながら引き算する。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int A, B;
  cin >> A >> B;

  if (A < 1 && B < 1) {
    cout << abs(A - B) << endl;
  } else if (A < 1 && 1 <= B) {
    cout << abs(A - B) - 1 << endl;
  } else if (B < 1 && 1 <= A) {
    cout << abs(A - B) - 1 << endl;
  } else {
    cout << abs(A - B) << endl;
  }
  return 0;

}
```
