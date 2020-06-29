### ARC009

# A - 元気にお使い！高橋君

[問題はこちら](https://atcoder.jp/contests/arc009/tasks/arc009_1)


## 発想

  a<sub>i</sub> * b<sub>i</sub> を加え、1.05を切り捨てで掛ける。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  int sum = 0;

  for (int i = 0; i < N; i++) {
    int a, b;
    cin >> a >> b;
    sum += a * b;
  }

  cout << floor((double) sum * 1.05) << endl;
  return 0;

}
```
