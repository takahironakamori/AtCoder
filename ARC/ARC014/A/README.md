### ARC014

# A - 君が望むなら世界中全てのたこ焼きを赤と青に染め上げよう

[問題はこちら](https://atcoder.jp/contests/arc014/tasks/arc014_1)


## 発想

  N が 2 で割り切れたら Blue を、割り切れない場合は Red を出力する。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  if (N % 2 == 1) {
    cout << "Red" << endl;
  } else {
    cout << "Blue" << endl;
  }
  return 0;

}
```
