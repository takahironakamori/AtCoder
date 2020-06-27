### ABC171

# B - Mix Juice

  [問題はこちら](https://atcoder.jp/contests/abc171/tasks/abc171_b)


## 発想

  p<sub>1</sub>からp<sub>N</sub>を昇順に並び替えて、小さい方からK個の合計を出力する。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, K;
  cin >> N >> K;

  vector<int> p(N);
  for (int i = 0; i < N; i++) {
    cin >> p[i];
  }

  sort(p.begin(), p.end());

  int ans = 0;

  for (int i = 0; i < K; i++) {
    ans += p[i];
  }

  cout << ans << endl;
  return 0;

}
```
