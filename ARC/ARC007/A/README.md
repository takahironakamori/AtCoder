### ARC007

# A - 帰ってきた器物損壊！高橋君

[問題はこちら](https://atcoder.jp/contests/arc007/tasks/arc007_1)


## 発想

  sを1文字ずつXと同じか否かを判定する。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  string X, s;
  cin >> X >> s;

  for (int i = 0; i < s.size(); i++) {
    if (s[i] != X[0]) {
      cout << s[i];
    }
  }

  cout << endl;
  return 0;

}
```
