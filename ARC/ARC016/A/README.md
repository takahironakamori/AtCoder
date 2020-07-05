### ARC016

# A - クイズゲーム

[問題はこちら](https://atcoder.jp/contests/arc016/tasks/arc016_1)


## 発想

  N は 2 から 5 までの間なので、1 から順番に M か否かを確認する。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, M;
  cin >> N >> M;

  for (int i = 1; i <= N; i++) {
    if (i != M) {
      cout << i << endl;
      return 0;
    }
  }

  return 0;

}
```
