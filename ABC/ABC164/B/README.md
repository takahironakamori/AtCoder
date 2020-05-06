### ABC164

# B - Battle

  [問題はこちら](https://atcoder.jp/contests/abc164/tasks/abc164_b)


## 発想

  高橋君は青木君を倒すのに C ÷ B 回（切り上げ）必要。<br>
  青木君は高橋君を倒すのに A ÷ D 回（切り上げ）必要。<br>
  回数が少ない方が勝ち。<br>
  また、高橋君が先攻なので、同じ回数だったら高橋君の勝ち。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int A, B, C, D;
  cin >> A >> B >> C >> D;

  if (ceil((double) C / B) <= ceil((double) A / D)) {
    cout << "Yes" << endl;
  } else{
    cout << "No" << endl;
  }

  return 0;
}
```
