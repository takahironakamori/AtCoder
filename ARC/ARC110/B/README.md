### ARC110

# B - Many 110

[問題はこちら](https://atcoder.jp/contests/arc110/tasks/arc110_b)


## 発想

  


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

long long N;
string T;
string s = "110";
long long c = 1e10;
long long ans = 0;

void f(long long i) {
  for (int j = 0; j < int(T.size()); ++j) {
    if (T[j] != s[(i + j) % 3]) {
      return;
    }
  }
  long long length = T.size() + i;
  long long count = (3 * c - length + 1);
  ans += (count + 2) / 3;
}

int main() {
  
  cin >> N;
  cin >> T;

  for (int i = 0; i < 3; ++i) {
    f(i);
  }

  cout << ans << endl;

  return 0;

}
```
