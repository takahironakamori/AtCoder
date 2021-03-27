### ARC108

# A - Sum and Product

[問題はこちら](https://atcoder.jp/contests/arc108/tasks/arc108_a)


## 発想

  


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;


int main() {
  
  long long S, P;
  cin >> S >> P;

  string ans = "No";

  bool flg = true;
  long long current = 1;

  while (flg) {
    long long s = S - current;
    long long m = P / current;
    if (s == m) {
      ans = "Yes";
      flg = false;
    } else {
      if (sqrt(P) < current) {
        flg = false;
      } else {
        current++;
      }
    }
  }  

  cout << ans << endl;

  return 0;
}
```
