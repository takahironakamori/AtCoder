### ABC157

# A - Duplex Printing

  [問題はこちら](https://atcoder.jp/contests/abc157/tasks/abc157_a)


## 発想

  Nを2で割った数（切り上げ）が答え。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  int answer = (N+1)/2;

  cout << answer << endl;

  return 0;

}
```
