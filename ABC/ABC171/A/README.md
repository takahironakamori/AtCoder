### ABC171

# A - αlphabet

  [https://atcoder.jp/contests/abc171/tasks/abc171_a)


## 発想

  文字のASCIIコードが65から90までだったら大文字。<br>
  そうじゃない場合は小文字。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  char S;
  cin >> S;

  if (65 <= (int) S && (int) S <= 90) {
    cout << "A" << endl;
  } else {
    cout << "a" << endl;
  }

  return 0;

}
```
