### ABC186

# D - Sum of difference

  [問題文はこちら](https://atcoder.jp/contests/abc186/tasks/abc186_d)


## 発想

　・
  


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, M;
  cin >> N >> M;

  if (M == 0) {
    cout << 1 << endl;
    return 0;
  }

  vector<int> A(M);
  for (int i = 0; i < M; ++i) {
    cin >> A[i];
  }
  sort(A.begin(), A.end());

  vector<int> d;
  int mn = 1000001000;
  int dif;
  for (int i = 0; i <= M; ++i) {
    if (i == 0) {
      dif = A[i] - 1;
    } else if (i == M) {
      dif = N - A[i - 1];
    } else {
      dif = A[i] - A[i - 1] - 1;
    }
    if (dif != 0) {
      mn = min(mn, dif);
      d.push_back(dif);
    }
  }

  int ans = 0;
  for (int i = 0; i < int(d.size()); ++i) {
    ans += (d[i] + mn - 1) / mn; 
  }

  cout << ans << endl;

  return 0;

}
```
