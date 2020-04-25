### ABC163

# A - Circle Pond

  [問題はこちら](https://atcoder.jp/contests/abc163/tasks/abc163_a)


## 発想

  円周を求める公式、直径（2×半径）× π を使う。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  double R;
  cin >> R;

  printf("%.16f", M_PI * 2 * R);
  printf("\n");

  return 0;

}
```
