### ABC164

# C - gacha

  [問題はこちら](https://atcoder.jp/contests/abc164/tasks/abc164_c)


## 発想

  社員番号 x の直属の部下は A<sub>i</sub> = x である。<br>
  各社員について上記を配列で数える。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  set<string> st;
  for (int i = 0; i < N; i++) {
    string S;
    cin >> S;
    st.insert(S);
  }

  cout << st.size() << endl;

  return 0;
}
```
