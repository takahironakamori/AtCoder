### ABC170

# B - Crane and Turtle

  [問題はこちら](https://atcoder.jp/contests/abc170/tasks/abc170_b)


## 発想

  鶴の数が0匹の場合から順番に試す。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int X, Y;
  cin >> X >> Y;

  string ans = "No";

  for (int i = 0; i <= X; i++) {
    int tsuru = i * 2;
    int kame = (X - i) * 4;
    if ((tsuru + kame) == Y) {
      ans = "Yes";
      break;
    }
  }

  cout << ans << endl;

  return 0;

}
```
