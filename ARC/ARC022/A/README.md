### ARC022

# A - スーパーICT高校生

[問題はこちら](https://atcoder.jp/contests/arc022/tasks/arc022_1)


## 発想

  I（i）、C（c）、T（t）があるか否かを順番に調べる。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  string S;
  cin >> S;

  int count = 0;

  for (int i = 0; i < S.size(); i++) {
    if (count == 0) {
      if (S[i] == 'I' || S[i] == 'i') {
        count++;
      }
    } else if (count == 1) {
      if (S[i] == 'C' || S[i] == 'c') {
        count++;
      }
    } else if (count == 2) {
      if (S[i] == 'T' || S[i] == 't') {
        count++;
      }
    }
  }

  if (count == 3) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;

}
```
