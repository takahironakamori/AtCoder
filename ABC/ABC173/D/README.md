### ABC173

# D - Chat in a Circle

  [https://atcoder.jp/contests/abc173/tasks/abc173_d]


## 発想

  ・ 大きい順に最大、1回、2回、2回...加える。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<int> A(N);
  long long ans = 0;

  for (int i = 0; i < N; ++i) {
    cin >> A[i];
  }

  sort(A.rbegin(), A.rend());

  int current = 0;
  int count = 0;
  for (int i = 0; i < N - 1; ++i) {
    ans += A[current];
    if (i == 0) {
      current++;
    } else {
      if (count == 1) {
        count = 0;
        current++;
      } else {
        count++;
      }
    }
  }
  
  cout << ans << endl;

  return 0;
}
```
