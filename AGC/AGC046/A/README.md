### AGC046

# A - Takahashikun, The Strider

  [https://atcoder.jp/contests/agc046/tasks/agc046_a)


## 発想

  360で割り切れるまで X を加え、その回数を出力する。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int X;
  cin >> X;

  int ans = 0;
  int current = 0;
  bool flg = false;

  while (!flg) {
    ans++;
    current += X;
    if (current % 360 == 0) {
      flg = true;
    }
  }

  cout << ans << endl;

  return 0;

}
```
