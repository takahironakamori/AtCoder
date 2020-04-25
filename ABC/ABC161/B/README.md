### ABC161

# B - Popular Vote

  [問題はこちら](https://atcoder.jp/contests/abc161/tasks/abc161_b)


## 発想

  総得票数の1/4M以上、得票している商品の数を数える。<br>
  その数がM以上であればYes、そうでなければNoを出力する。

## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, M;
  cin >> N >> M;

  vector<int> A(N);
  int sum = 0;
  for (int i = 0; i < N; i++) {
    cin >> A[i];
    sum += A[i];
  }

  int count = 0;
  int limit = ceil((double) sum / (4 * M));

  for (int i = 0; i < N; i++) {
    if (limit <= A[i]) {
      count++;
    }
  }

  if (M <= count) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;

}
```
