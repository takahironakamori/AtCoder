### ARC001

# A - センター採点

[問題はこちら](https://atcoder.jp/contests/arc001/tasks/arc001_1)


## 発想

  1から4までの個数を数えて、最大値と最小値を出力する。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  string S;
  cin >> S;

  vector<int> count(5);
  for (int i = 0; i < S.size(); i++) {
    count[(int) S[i] - 48]++;
  }

  int mn = N;
  int mx = 0;
  for (int i = 1; i < 5; i++) {
    mn = min(mn, count[i]);
    mx = max(mx, count[i]);
  }

  cout << mx << " " << mn << endl;
  return 0;

}
```
