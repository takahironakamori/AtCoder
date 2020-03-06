### ABC134

# C - Exception Handling

  [問題はこちら](https://atcoder.jp/contests/abc134/tasks/abc134_c)

## 発想

  配列を複製し、片方を並び替える。<br>
  A<sub>i</sub>とA<sub>max</sub>が同じ場合は、2番目に大きいものを出力する。<br>
  上記以外の場合は、最も大きいものを出力する。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<int> A(N);
  vector<int> A2(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  A2 = A;
  sort(A.begin(), A.end() , greater<int>());

  for (int i = 0; i < N; i++) {
    if (A2[i] == A[0]) {
      cout << A[1] << endl;
    } else {
      cout << A[0] << endl;
    }
  }

  return 0;

}
```
