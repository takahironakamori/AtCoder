### ABC188

# D - Snuke Prime

  [問題文はこちら](https://atcoder.jp/contests/abc188/tasks/abc188_d)


## 発想

　・
  


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;


int main() {

  int N;
  long long C;
  cin >> N >> C;

  map<int, long long> mp;

  for (int i = 0; i < N; ++i) {
    int a, b, c;
    cin >> a >> b >> c;
    mp[a] += c;
    mp[b + 1] -= c;
  }

  long long ans = 0;
  long long v = 0;
  int index = 0;
  for (auto item : mp) {
    if (v < C) {
      ans += v * (item.first - index);
    } else {
      ans += C * (item.first - index);
    }
    v += item.second;
    index = item.first;
  }

  cout << ans << endl;

  return 0;

}
```
