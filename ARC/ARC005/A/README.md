### ARC005

# A - 大好き高橋君

[問題はこちら](https://atcoder.jp/contests/arc005/tasks/arc005_1)


## 発想

  最後の単語には、.（ピリオド）がついているので外して考える。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  int ans = 0;

  for (int i = 0; i < N; i++) {
    string s;
    cin >> s;
    if (s[s.size() - 1] == '.') {
      s = s.substr(0, s.size() - 1);
    }
    if (s == "TAKAHASHIKUN" || s == "Takahashikun" || s == "takahashikun") {
      ans++;
    }
  }

  cout << ans << endl;
  return 0;

}
```
