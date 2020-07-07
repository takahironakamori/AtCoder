### ARC033

# A - 隠れた言葉

[問題はこちら](https://atcoder.jp/contests/arc033/tasks/arc033_1)


## 発想

  N文字の部分文字列の個数は、1 から n までの和、 n * (n + 1) / 2 となる。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  cout << N * (N + 1) / 2 << endl;
  return 0;

}
```
