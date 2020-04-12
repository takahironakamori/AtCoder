### ABC160

# B - Golden Coins

  [問題はこちら](https://atcoder.jp/contests/abc160/tasks/abc160_b)


## 発想

  500円硬貨をできる限り交換し、あまりで5円硬貨をできる限り交換する。<br>


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int X;
  cin >> X;

  int a = (X / 500) * 1000;
  int b = (X % 500) / 5;
  a += b * 5;

  cout << a << endl;

  return 0;

}
```
