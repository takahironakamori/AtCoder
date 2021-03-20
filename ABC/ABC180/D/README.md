### ABC180

# D - Takahashi Unevolved

  [問題文はこちら](https://atcoder.jp/contests/abc180/tasks/abc180_d)


## 発想

　・ 
  


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  long long X, Y, A, B;
  cin >> X >> Y >> A >> B;

  long long ans = 0;

  while (1) {

    if (Y / A < X) {
      break;
    }

    if (Y <= A * X) {
      break;
    }

    if (X + B <= X * A) {
      break;
    }

    X *= A;
    ans++;

  }

  ans += (Y - X - 1) / B;

  cout << ans << endl;

  return 0;

}
```
