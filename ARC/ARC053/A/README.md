### ARC053

# A - ドミノ色塗り

[問題はこちら](https://atcoder.jp/contests/arc053/tasks/arc053_a)


## 発想

  左右に2個選ぶとき、左側として選ぶことができるのは (W - 1) × H 箇所ある。<br>
  上下に2個選ぶとき、上として選ぶことができるのは (H - 1) × W 箇所ある。<br>
  これらを足したものを出力する。
  

## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int H, W;
  cin >> H >> W;

  cout << H * (W - 1) + W * (H - 1) << endl;
  return 0;

}
```
