### ABC199

# A - Square Inequality

  [問題文はこちら](https://atcoder.jp/contests/abc199/tasks/abc199_a)


## 発想

　・
  


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;


int main() {

  int A, B, C;
  cin >> A >> B >> C;

  if (A * A + B * B  < C * C) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;

}
```
