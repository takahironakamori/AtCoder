### ARC032

# A - ホリドッグ

[問題はこちら](https://atcoder.jp/contests/arc032/tasks/arc032_1)


## 発想

  1 から n までの和は n * (n + 1) / 2 で求める。<br>
  求めた数を素数判定する。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

bool is_prime(long N) {
  for (long i = 2; i * i <= N; i++) {
    if (N % i == 0) {
      return false;
    }
  }
  return N != 1;
}

int main() {

  long N;
  cin >> N;

  N = N * (N + 1) / 2;

  bool isPrime = is_prime(N);

  if (isPrime) {
    cout << "WANWAN" << endl;
  } else {
    cout << "BOWWOW" << endl;
  }

}
```
