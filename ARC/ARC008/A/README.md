### ARC008

# A - たこ焼き買えるかな？

[問題はこちら](https://atcoder.jp/contests/arc008/tasks/arc008_1)


## 発想

  次の3パターンのうち最小値が解答となる。<br>
  ・1個ずつ買う<br>
  ・10個ずつ買えるだけ買って、余った分を1個ずつ買う<br>
  ・10個パックで全部買う


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  // 1個ずつ買う
  int a = N * 15;

  // 10個ずつ買えるだけ買って、余った分を1個ずつ買う
  int b = (N / 10) * 100;
  b += (N % 10) * 15;

  // 10個パックで全部買う
  int c = ceil((double) N / 10) * 100;

  cout << min(a, min(b, c)) << endl;
  return 0;

}
```
