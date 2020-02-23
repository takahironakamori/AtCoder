### ABC156

# B - Digits

  [問題はこちら](https://atcoder.jp/contests/abc156/tasks/abc156_b)


## 発想

  N を K で割れる回数 + 1 を出力する。 


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, K;
  cin >> N >> K;

  int answer = 1;

  while (K <= N) {
    N = N / K;
    answer++;
  }

  cout << answer << endl;

  return 0;

}
```
