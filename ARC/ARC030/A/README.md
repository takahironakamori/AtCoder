### ARC030

# A - 閉路グラフ

[問題はこちら](https://atcoder.jp/contests/arc030/tasks/arc030_1)


## 発想

  n ÷ 2 < k だと NO、そうでない場合は、YESとなる。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, k;
  cin >> n >> k;

  if (n / 2 < k){
    cout << "NO" << endl;
  } else {
    cout << "YES" << endl;
  }
  return 0;

}
```
