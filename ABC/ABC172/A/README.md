### ABC172

# A - αlphabet

  [https://atcoder.jp/contests/abc172/tasks/abc172_a]


## 発想

  文字のASCIIコードが65から90までだったら大文字。<br>
  そうじゃない場合は小文字。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin >> a;
    cout << a + a * a + a * a * a << endl;
}
```
