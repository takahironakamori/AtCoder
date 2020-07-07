### ARC050

# A - 大文字と小文字

[問題はこちら](https://atcoder.jp/contests/arc050/tasks/arc050_a)


## 発想

  大文字のASCIIコードに32を加えて小文字にするか、その逆をして同じか否かを判定する。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  char C, c;
  cin >> C >> c;

  C = char(C + 32);

  if (C == c) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;

}
```
