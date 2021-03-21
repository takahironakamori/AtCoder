### ABC166

# E - This Message Will Self-Destruct in 5s

  [問題はこちら](https://atcoder.jp/contests/abc166/tasks/abc166_e)


## 発想

  

## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int X, Y, A, B, C;
  cin >> X >> Y >> A >> B >> C;

  vector<int> p(A);
  for (int i = 0; i < A; ++i) {
    cin >> p[i];
  }
  sort(p.rbegin(), p.rend());

  vector<int> q(B);
  for (int i = 0; i < B; ++i) {
    cin >> q[i];
  }
  sort(q.rbegin(), q.rend());

  vector<int> r(C);
  for (int i = 0; i < C; ++i) {
    cin >> r[i];
  }
  sort(r.rbegin(), r.rend());

  vector<int> all;
  for (int i = 0; i < X; ++i) {
    all.push_back(p[i]);
  }

  for (int i = 0; i < Y; ++i) {
    all.push_back(q[i]);
  }

  for (int i = 0; i < C; ++i) {
    all.push_back(r[i]);
  }

  sort(all.rbegin(), all.rend());

  long long ans = 0;

  for (int i = 0; i < X + Y; ++i) {
    ans += all[i];
  }

  cout << ans << endl;

  return 0;
}
```
