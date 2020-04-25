### ABC163

# B - Homework

  [問題はこちら](https://atcoder.jp/contests/abc163/tasks/abc163_b)


## 発想

  全ての宿題をするために必要な日数の合計を計算する。<br>
  合計がNより大きい場合は、不可能となり、<br>
  そうでない場合はN - 合計を計算する。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, M;
  cin >> N >> M;

  int sum = 0;
  for (int i = 0; i < M; i++) {
    int A;
    cin >> A;
    sum += A;
  }

  if (N < sum) {
    cout << -1 << endl;
  } else {
    cout << N - sum << endl;
  }

  return 0;

}
```
