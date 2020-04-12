### ABC160

# C - Replacing Integer

  [問題はこちら](https://atcoder.jp/contests/abc161/tasks/abc161_c)


## 発想

  NをKで割った余りとKからNをKで割った余りを引いたもののうち、小さい方が回答となる。<br>



## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  long long N, K;
  cin >> N >> K;

  cout << min(N % K, K - (N % K)) << endl;

  return 0;

}
```
