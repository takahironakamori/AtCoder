### ABC160

# A - Coffee

  [問題はこちら](https://atcoder.jp/contests/abc160/tasks/abc160_a)


## 発想

  3文字目と4文字目が同じで、かつ5文字目と6文字目も同じかを判定する。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  string S;
  cin >> S;

  if (S[2] == S[3] && S[4] == S[5]) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;

}
```
