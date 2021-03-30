### ABC179

# C - A x B + C

  [問題文はこちら](https://atcoder.jp/contests/abc179/tasks/abc179_c)


## 発想

　・
  


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;
  
  int ans = 0;

  for (int A = 1; A < N; ++A) {
    ans += (N - 1) / A;
  }
  
  cout << ans << endl;

  return 0;

}
```
