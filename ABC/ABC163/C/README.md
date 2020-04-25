### ABC163

# C - management

  [問題はこちら](https://atcoder.jp/contests/abc163/tasks/abc163_c)


## 発想

  社員番号 x の直属の部下は A<sub>i</sub> = x である。<br>
  各社員について上記を配列で数える。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<int> A(N);
  for (int i = 1; i < N; i++) {
    cin >> A[i];
  }

  vector<int> B(N);
  for (int i = 1; i < N; i++) {
    B[A[i]-1]++;
  }

  for (int i = 0; i < N; i++) {
    cout << B[i] << endl;
  }

  return 0;

}
```
