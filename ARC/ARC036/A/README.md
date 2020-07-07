### ARC036

# A - ぐっすり

[問題はこちら](https://atcoder.jp/contests/arc036/tasks/arc036_a)


## 発想

  睡眠時間の合計を3日ずつ計算して、Kと比較する。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, K;
  cin >> N >> K;

  vector<int> t(N);
  for (int i = 0; i < N; i++) {
    cin >> t[i];
  }

  int ans = -1;
  int sum = t[0] + t[1];

  for (int i = 2; i < N; i++) {
    if (i != 2) {
      sum -= t[i - 3];
    }
    sum += t[i];
    if (sum < K) {
      ans = i + 1;
      break;
    }
  }

  cout << ans << endl;
  return 0;

}
```
