### ABC158

# A - Station and Bus

  [問題はこちら](https://atcoder.jp/contests/abc158/tasks/abc158_a)


## 発想

  SがAAAかBBBならばNoを出力し、それ以外の場合はYesを出力する。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  string S;
  cin >> S;

  if (S == "AAA" || S == "BBB") {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }

  return 0;

}
```
