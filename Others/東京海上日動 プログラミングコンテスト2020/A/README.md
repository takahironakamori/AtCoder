### 東京海上日動 プログラミングコンテスト2020

# A - Nickname

  [https://atcoder.jp/contests/tokiomarine2020/tasks/tokiomarine2020_a)


## 発想

  入力で受け取った文字列の前から3文字を出力する。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  string S;
  cin >> S;

  cout << S.substr(0,3) << endl;

  return 0;

}
```
