### ARC047

# A - タブの開きすぎ

[問題はこちら](https://atcoder.jp/contests/arc047/tasks/arc047_a)


## 発想

  1文字ずつ確認する。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, L;
  cin >> N >> L;

  string S;
  cin >> S;

  int count = 0;
  int current = 1;

  for (int i = 0; i < N; i++) {
    if (S[i] == '+') {
      current++;
    } else {
      current--;
    }
    if (L < current) {
      count++;
      current = 1;
    }
  }

  cout << count << endl;
  return 0;

}
```
