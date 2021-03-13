### ABC173

# A - Payment

  [https://atcoder.jp/contests/abc172/tasks/abc173_a]


## 発想

  


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  // O(1)
  int r = N % 1000;
  if (r == 0) {
    cout << 0 << endl;
  } else {
    cout << 1000 - r << endl;
  }

  return 0;

}
```
