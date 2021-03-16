### ABC177

# C - Sum of product of pairs

  [問題文はこちら](https://atcoder.jp/contests/abc177/tasks/abc177_c)


## 発想

　・
  


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  long long mod = 1000000007;

  int N;
  cin >> N;

  vector<long long> A(N);
  long long ans = 0;
  long long x = 0;

  for (int i = 0; i < N; ++i) {
    cin >> A[i];
    if (i != 0) {
      ans = (ans + x * A[i]) % mod;
    }
    x = (x + A[i]) % mod;
  }

  cout << ans << endl;

  return 0;

}
```
