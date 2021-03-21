### ABC181

# E - Transformable Teacher

  [問題文はこちら](https://atcoder.jp/contests/abc181/tasks/abc181_e)


## 発想

　・
  


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, M;
  cin >> N >> M;

  vector<int> H(N);
  for (int i = 0; i < N; ++i) {
    cin >> H[i];
  }

  sort(H.begin(), H.end());

  vector<int> W(M);
  for (int i = 0; i < M; ++i) {
    cin >> W[i];
  }

  vector<int> sum1((N + 1) / 2);
  vector<int> sum2((N + 1) / 2);
   
  for (int i = 0; i < N - 1; i += 2) {
    sum1[i / 2 + 1] = sum1[i / 2] + H[i + 1] - H[i];
  }

  for (int i = N - 2; 0 < i; i -= 2) {
    sum2[i / 2] = sum2[i / 2 + 1] + H[i + 1] - H[i];
  }

  int ans = INT_MAX;

  for (int i = 0; i < int(W.size()); ++i) {
    int x = lower_bound(H.begin(), H.end(), W[i]) - H.begin();
    if (x % 2 == 1) {
      x -= 1;
    }
    ans = min(ans, sum1[x / 2] + sum2[x / 2] + abs(H[x] - W[i]));
  }

  cout << ans << endl;

  return 0;

}
```
