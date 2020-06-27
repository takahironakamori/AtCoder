### ABC171

# D - Replacing

  [問題はこちら](https://atcoder.jp/contests/abc171/tasks/abc171_d)


## 発想

  A<sub>1</sub>からA<sub>N</sub>までの合計と使われている数字の個数を数える。<br>
  B<sub>i</sub>で指定された数値の数と使われている個数を引いて、C<sub>i</sub>で指定された数値の数に加える。<br>
  この変更に伴う差を調整して出力する。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  long long N;
  cin >> N;

  vector<long long> A(100010);
  long long sum = 0;
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    A[a]++;
    sum += a;
  }

  long long Q;
  cin >> Q;

  vector<long long> B(Q);
  vector<long long> C(Q);
  for (int i = 0; i < Q; i++) {
    cin >> B[i] >> C[i];
  }

  for (int i = 0; i < Q; i++) {
    sum -= B[i] * A[B[i]];
    sum -= C[i] * A[C[i]];
    A[C[i]] += A[B[i]];
    A[B[i]] = 0;
    sum += C[i] * A[C[i]];
    cout << sum << endl;
  }

  return 0;

}
```
