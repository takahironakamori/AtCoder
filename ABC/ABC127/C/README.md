### ABC127

# C - Prison

  [問題はこちら](https://atcoder.jp/contests/abc127/tasks/abc127_c)

## 発想

  L<sub>i</sub>のうち最も大きい値 ≦ R<sub>i</sub>のうち最も小さい値ならば、その差+1が回答となる。<br>
  上記を満たさない場合は0となる。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, M;
  cin >> N >> M;

  int L = 0;
  int R = N;
  for (int i = 0; i < M; i++) {
    int L_, R_;
    cin >> L_ >> R_;
    L = max(L, L_);
    R = min(R, R_);
  }

  if (L <= R) {
    cout << R - L + 1 << endl;
  } else {
    cout << 0 << endl;
  }

  return 0;

}
```
