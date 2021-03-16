### ABC189

# B - Alcoholic

  [問題文はこちら](https://atcoder.jp/contests/abc189/tasks/abc189_b)


## 発想

　・整数で考える。
  


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, X;
  cin >> N >> X;
  X *= 100;

  vector<int> V(N);
  vector<int> P(N);

  for (int i = 0; i < N; ++i) {
    cin >> V[i] >> P[i];
  }
  
  int ans = -1;
  int current = 0;

  for (int i = 0; i < N; ++i) {
    current += V[i] * P[i];
    if (X < current) {
      ans = i + 1;
      break;
    }
  }

  cout << ans << endl;

  return 0;

}
```
