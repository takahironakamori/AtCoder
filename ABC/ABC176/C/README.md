### ABC176

# C - Step

  [問題文はこちら](https://atcoder.jp/contests/abc176/tasks/abc176_c)


## 発想

　・
  


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<int> A(N);
  for (int i = 0; i < N; ++i) {
    cin >> A[i];
  }

  long long ans = 0;

  for (int i = 1; i < N; ++i) {
    if (A[i] < A[i-1]) {
      ans += A[i-1] - A[i];
      A[i] = A[i-1];
    }
  }

  cout << ans << endl;

  return 0;

}
```
