### ARC108

# B - Abbreviate Fox

[問題はこちら](https://atcoder.jp/contests/arc108/tasks/arc108_b)


## 発想

  


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int N;
  string s;
  cin >> N >> s;

  string v = "";
  int ans = 0;

  for (int i = 0; i < N; ++i) {
    v += s[i];
    string c = "";
    for (int i = v.size() - 3; i < int(v.size()); ++i) {
      c += v[i];
    }
    if (c == "fox") {
      ans++;
      v = v.substr(0, v.size() - 3);
    }
  }

  cout << v.size() << endl;

  return 0;

}
```
