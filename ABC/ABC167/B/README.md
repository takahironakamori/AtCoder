### ABC167

# B - Easy Linear Programming

  [問題はこちら](https://atcoder.jp/contests/abc167/tasks/abc167_b)


## 発想

  1が書かれたカードを全部かK枚選ぶ。<br>
  まだカード選べるときは、0が書かれたカードを全部か残りのK枚選ぶ。<br>
  まだカードを選べるときは、-1が書かれたカードを全部か残りK枚選ぶ。

## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  long long A, B, C, K;
  cin >> A >> B >> C >> K;

  long long answer = 0;

  answer += min(A, K);
  K = max((long long) 0, K - A);
  K = max((long long) 0, K - B);
  answer -= min(C, K);

  cout << answer << endl;

  return 0;
}
```
