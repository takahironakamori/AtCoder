### ABC167

# A - Registration

  [問題はこちら](https://atcoder.jp/contests/abc167/tasks/abc167_a)


## 発想

  Tの末尾1文字を除いたものとSが同じであればYesを、そうでない場合はNoを出力する。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  string S, T;
  cin >> S >> T;

  if (S == T.substr(0, T.size()-1)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
```
