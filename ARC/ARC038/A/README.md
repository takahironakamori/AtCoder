### ARC038

# A - カードと兄妹

[問題はこちら](https://atcoder.jp/contests/arc038/tasks/arc038_a)


## 発想

  Aを大きい順に並び替えて、奇数番目だけを合計する。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  sort(A.begin(), A.end(), greater<int>());

  int ans = 0;
  for (int i = 0; i < N; i++) {
    if (i % 2 == 0) {
      ans += A[i];
    }
  }

  cout << ans << endl;
  return 0;

}
```
