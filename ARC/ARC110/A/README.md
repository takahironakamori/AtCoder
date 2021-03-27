### ARC110

# A - Redundant Redundancy

[問題はこちら](https://atcoder.jp/contests/arc110/tasks/arc110_a)


## 発想

  


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
  if (b == 0) {
    return a;
  }
  return gcd(b, a % b);
}

long long lcm(long a, long b) {
  return(long long) a / gcd(a, b) * b;
}

int main() {
  
  int N;
  cin >> N;

  long long ans = 2;
  
  for (int i = 3; i <= N; ++i) {
    ans = lcm(ans, i);
  }

  cout << ans + 1 << endl;

  return 0;
}
```
