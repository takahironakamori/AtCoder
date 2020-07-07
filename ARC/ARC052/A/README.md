### ARC052

# A - 何期生？

[問題はこちら](https://atcoder.jp/contests/arc052/tasks/arc052_a)


## 発想

  Sを1文字目から順番に'0'から'9'までの数値を抜き出す。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  string S;
  cin >> S;

  string ans = "";

  for (int i = 0; i < S.size(); i++) {
    if ('0' <= S[i] && S[i] <= '9') {
      ans += S[i];
    }
  }

  cout << ans << endl;
  return 0;

}
```
