### ARC017

# A - 素数、コンテスト、素数

[問題はこちら](https://atcoder.jp/contests/arc017/tasks/arc017_1)


## 発想

  N について素数判定を行う。


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

  bool isPrime = is_prime(N);

  if (isPrime) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

}
```
