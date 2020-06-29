### ARC012

# A - 週末

[問題はこちら](https://atcoder.jp/contests/arc012/tasks/arc012_1)


## 発想

  土日だったら0、月から金は順番に5,4,3,2,1を出力する。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  string day;
  cin >> day;

  int ans = 0;

  if (day == "Monday") {
    ans = 5;
  } else if (day == "Tuesday") {
    ans = 4;
  } else if (day == "Wednesday") {
    ans = 3;
  } else if (day == "Thursday") {
    ans = 2;
  } else if (day == "Friday") {
    ans = 1;
  }

  cout << ans << endl;
  return 0;

}
```
