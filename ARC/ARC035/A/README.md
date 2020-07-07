### ARC035

# A - 高橋くんと回文

[問題はこちら](https://atcoder.jp/contests/arc035/tasks/arc035_a)


## 発想

  sと反転した文字列を用意する。<br>
  1文字ずつ同じか否かを判定するが、どちらかの文字が * の場合は判定は飛ばす。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  string s;
  cin >> s;

  string r = s;
  reverse(r.begin(), r.end());

  string ans = "YES";
  for (int i = 0; i < s.size(); i++) {
    if (s[i] != '*' && r[i] != '*') {
      if (s[i] != r[i]) {
        ans = "NO";
        break;
      }
    }
  }

  cout << ans << endl;
  return 0;

}
```
