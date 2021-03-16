### ABC176

# B - Multiple of 9

  [問題文はこちら](https://atcoder.jp/contests/abc176/tasks/abc176_b)


## 発想

　・文字列で受け取って、1桁ずつ数値に変換して合計を計算する。
  


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  string N;
  cin >> N;

  int sum = 0;

  for (int i = 0; i < int(N.size()); ++i) {
    sum += (N[i] - '0');
  }

  if (sum % 9 == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;

}
```
