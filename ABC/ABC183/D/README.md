### ABC183

# D - Water Heater

  [問題文はこちら](https://atcoder.jp/contests/abc183/tasks/abc183_d)


## 発想

　・ 
  


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, W;
  cin >> N >> W;

  vector<long long> sum(200100);
  for (int i = 0; i < N; ++i) {
    int S, T, P;
    cin >> S >> T >> P;
    sum[S] += P;
    sum[T] -= P;
  }

  string ans = "Yes";
  for (int i = 0; i < 200100; ++i) {
    if (i != 0) {
      sum[i] = sum[i - 1] + sum[i];
    }
    if (W < sum[i]) {
      ans = "No";
      break;
    }
  }

  cout << ans << endl;

  return 0;

}
```
