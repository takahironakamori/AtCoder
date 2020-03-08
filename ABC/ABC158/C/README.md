### ABC158

# C - Tax Increase

  [問題はこちら](https://atcoder.jp/contests/abc158/tasks/abc158_c)


## 発想

  Bの上限が100で、考えられる税抜き金額の範囲は、1から1009円までとなるので、全部試す。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int A, B;
  cin >> A >> B;

  int answer = -1;

  for (int i = 1; i < 1010; i++){
    int a_ = floor((double) i / 100 * 8);
    int b_ = i / 10;
    if (A == a_ && B == b_){
      answer = i;
      break;
    }
  }

  cout << answer << endl;

  return 0;

}
```
