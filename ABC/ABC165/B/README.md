### ABC165

# B - 1%

  [問題はこちら](https://atcoder.jp/contests/abc165/tasks/abc165_b)


## 発想

  V(初期値100) に対して、X を超えるまで V の 1/100 を加え続け、加えた回数を数える。<br>


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  long long X;
  cin >> X;

  long long V = 100;
  long long answer = 0;

  while (V < X) {
    V += V / 100;
    answer++;
  }

  cout << answer << endl;

  return 0;
}
```
