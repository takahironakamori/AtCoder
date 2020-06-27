### ABC170

# C - Forbidden List

  [問題はこちら](https://atcoder.jp/contests/abc170/tasks/abc170_c)


## 発想

  p<sub>1</sub>からp<sub>N</sub>にXがなければ、Xが答えとなる。<br>
  そうでない場合は、0から順番に101まで、p<sub>1</sub>からp<sub>N</sub>になければ絶対値を計算して、最小値となる数を探す。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int X, N;
  cin >> X >> N;

  vector<bool> p(101);
  for (int i = 0; i < N; i++) {
    int P;
    cin >> P;
    p[P] = true;
  }

  if (p[X] == false) {
    cout << X << endl;
    return 0;
  }

  int d = 1000;
  int ans = 100;

  for (int i = 0; i < 102; i++) {
    if (p[i] == false) {
      int D = abs(i - X);
      if (D < d) {
        d = D;
        ans = i;
      }
    }
  }

  cout << ans << endl;

  return 0;

}
```
