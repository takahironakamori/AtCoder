### ARC031

# A - 名前

[問題はこちら](https://atcoder.jp/contests/arc031/tasks/arc031_1)


## 発想

  Name を複製し、判定させて一致するか否かを確認する。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  string N;
  cin >> N;

  string S = N;
  reverse(S.begin(), S.end());

  if (S == N) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;

}
```
