### ABC159

# A - The Number of Even Pairs

  [問題はこちら](https://atcoder.jp/contests/abc159/tasks/abc159_a)


## 発想

  2個のボールの合計が偶数になるのは、以下の2パターン。
  ・偶数のボールと偶数のボール
  ・奇数のボールと奇数のボール
  したがって、<sub>N</sub>C<sub>2</sub>＋<sub>M</sub>C<sub>2</sub>が答え。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, M;
  cin >> N >> M;

  int answer = M * (M - 1) / 2 + N * (N - 1) / 2;

  cout << answer << endl;

  return 0;

}
```
