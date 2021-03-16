### ABC175

# B - Making Triangle

  [問題文はこちら](https://atcoder.jp/contests/abc175/tasks/abc175_b)


## 発想

　・
  


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<int> L(N);
  for (int i = 0; i < N; ++i) {
    cin >> L[i];
  }

  int ans = 0;

  for (int i = 0; i < N; ++i) {
    for (int j = i; j < N; ++j) {
      for (int k = j; k < N; ++k) {
        vector<int> l = {L[i], L[j], L[k]};
        sort(l.begin(), l.end());
        if (l[0] != l[1] && l[0] != l[2] && l[1] != l[2]) {
          if (l[2] < l[0] + l[1]) {
            ans++;
          }
        }
      }
    }
  }

  cout << ans << endl;

  return 0;

}
```
