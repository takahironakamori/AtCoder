### ABC162

# B - FizzBuzz Sum

  [問題はこちら](https://atcoder.jp/contests/abc162/tasks/abc162_b)


## 発想

  3と5で割り切れない値の合計を計算する。

## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  long long answer = 0;
  for (int i = 1; i <= N; i++) {
    if (i % 3 != 0 && i % 5 != 0) {
      answer += i;
    }
  }

  cout << answer << endl;

  return 0;

}
```
