### ABC162

# C - Sum of gcd of Tuples (Easy)

  [問題はこちら](https://atcoder.jp/contests/abc162/tasks/abc162_c)


## 発想

  gcd(a,b,c) = gcd(gcd(a,b),c)を計算する。<br>
  3重ループだが、O(K<sup>3</sup> long K) で間に合う。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
  if (b == 0) {
    return a;
  }
  return gcd(b, a % b);
}

int main() {

  int K;
  cin >> K;

  int answer = 0;

  for (int i = 1; i <= K; i++) {
    for (int j = 1; j <= K; j++) {
      for (int k = 1; k <= K; k++) {
        int gcd_ = gcd(i,j);
        answer += gcd(gcd_, k);
      }
    }
  }

  cout << answer << endl;

  return 0;

}
```
