### ARC049

# A - "強調"

[問題はこちら](https://atcoder.jp/contests/arc049/tasks/arc049_a)


## 発想

  0文字目からA文字目、A文字目からB文字目、B文字目からC文字目、C文字目からD文字目、D文字目からSの最後までで分けて考える。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  string S;
  cin >> S;

  int A, B, C, D;
  cin >> A >> B >> C >> D;

  for (int i = 0; i < A; i++) {
    cout << S[i];
  }

  cout << "\"";

  for (int i = A; i < B; i++) {
    cout << S[i];
  }

  cout << "\"";

  for (int i = B; i < C; i++) {
    cout << S[i];
  }

  cout << "\"";

  for (int i = C; i < D; i++) {
    cout << S[i];
  }

  cout << "\"";

  for (int i = D; i < (int) S.size(); i++) {
    cout << S[i];
  }

  cout << endl;
  return 0;

}
```
