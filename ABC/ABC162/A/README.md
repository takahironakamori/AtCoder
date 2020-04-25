### ABC162

# A - Lucky 7

  [問題はこちら](https://atcoder.jp/contests/abc162/tasks/abc162_a)


## 発想

  N[0]からN[2]までに7があれば、Yesを出力し、そうでない場合は、Noを出力する。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  string N;
  cin >> N;

  if (N[0] == '7' || N[1] == '7' || N[2] == '7') {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;

}
```
