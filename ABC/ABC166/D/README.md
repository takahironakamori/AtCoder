### ABC166

# D - I hate Factorization

  [問題はこちら](https://atcoder.jp/contests/abc166/tasks/abc166_d)


## 発想

  A<sup>5</sup> - B<sup>5</sup> が X（最大10<sup>9</sup>）を超えるのは、<br>
  120<sup>5</sup> - 119<sup>5</sup> や、<br>
  (-120)<sup>5</sup> - (-119)<sup>5</sup>のときなので、<br>
  -200くらいから200までを全探索すればいい。<br>
  A<sup>5</sup> - B<sup>5</sup> が X（最大10<sup>9</sup>）を超える値は実際に調べる。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  long long X;
  cin >> X;

  long long A = 0;
  long long B = 0;

  for (int i = -200; i <= 200; i++) {
    A = i;
    for (int k = 0; k < 4; k++) {
      A *= i;
    }
    for (int j = -200; j <= 200; j++) {
      B = j;
      for (int k = 0; k < 4; k++) {
        B *= j;
      }
      if (A - B == X) {
        cout << i << " " << j << endl;
        return 0;
      }
    }
  }

  return 0;
}
```
