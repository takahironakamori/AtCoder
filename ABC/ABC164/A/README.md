### ABC164

# A - Sheep and Wolves

  [問題はこちら](https://atcoder.jp/contests/abc164/tasks/abc164_a)


## 発想

  if文で分岐する。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int S, W;
  cin >> S >> W;

  if (S <= W) {
    cout << "unsafe" << endl;
  } else{
    cout << "safe" << endl;
  }

  return 0;
}
```
