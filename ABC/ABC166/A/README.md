### ABC166

# A - A?C

  [問題はこちら](https://atcoder.jp/contests/abc166/tasks/abc166_a)


## 発想

  ABCを受け取ったらARCを、<br>
  ARCを受け取ったらABCを出力する。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  string S;
  cin >> S;

  if (S == "ABC") {
    cout << "ARC" << endl;
  } else {
    cout << "ABC" << endl;
  }

  return 0;

}
```
