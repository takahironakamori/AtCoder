### ABC156

# C - Rally

  [問題はこちら](https://atcoder.jp/contests/abc156/tasks/abc156_c)


## 発想

  1 から 100 まで全部試して、最小の体力の消費量を計算する。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<int> X(N);
  for (int i = 0; i < N; i++) {
    cin >> X[i];
  }

  sort(X.begin(), X.end());

  int answer = 100000000;

  for (int i = 1; i <= 100; i++) {
    int p = 0;
    for (int j = 0; j < N; j++) {
      p += (X[j] - i) * (X[j] - i);
    }
    answer = min(answer, p);
  }

  cout << answer << endl;

  return 0;

}
```
