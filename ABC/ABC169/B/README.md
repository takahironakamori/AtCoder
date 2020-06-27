### ABC169

# B - Multiplication 2

  [問題はこちら](https://atcoder.jp/contests/abc169/tasks/abc169_b)


## 発想

  A<sub>1</sub>からA<sub>N</sub>に0が含まれている場合は、0を出力する。<br>
  そうでない場合は、次に掛けるものが 10<sup>18</sup> / いままで掛けた結果 以下であれば掛け算をつづけ、<br>
  そうでない場合は、-1を出力する。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<long long> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  for (int i = 0; i < N; i++) {
    if (A[i] == 0) {
      cout << 0 << endl;
      return 0;
    }
  }

  long long answer = A[0];

  for (int i = 1; i < N; i++) {
    long long a = 1000000000000000000 / answer;
    if (a < A[i]) {
      cout << -1 << endl;
      return 0;
    } else {
      answer *= A[i];
    }
  }

  cout << answer << endl;

}
```
