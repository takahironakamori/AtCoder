### ABC158

# D - String Formation

  [問題はこちら](https://atcoder.jp/contests/abc158/tasks/abc158_d)


## 発想

  文字通り実装すると計算量が多くなりすぎるパターンがある。<br>
  dequeを利用し、T=1の回数の偶奇で前や後ろに追加し、最後も前または後ろから出力すれば、計算量が少なくて済む。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  string s;
  cin >> s;

  int Q;
  cin >> Q;

  // Tの回数
  int countT = 0;

  deque<char> S;
  for (int i = 0; i < s.size(); i++) {
    S.push_back(s[i]);
  }

  for (int i = 0; i < Q; i++) {
    int T;
    cin >> T;
    if (T == 1) {
      countT++;
    } else {
      int F;
      char C;
      cin >> F >> C;
      if (F == 1) {
        if (countT % 2 == 0) {
          // 前に加える
          S.push_front(C);
        } else {
          // 後ろ加える
          S.push_back(C);
        }
      } else {
        if (countT % 2 == 0) {
          // 後ろに加える
          S.push_back(C);
        } else {
          // 前に加える
          S.push_front(C);
        }
      }
    }
  }

  if (countT % 2 == 0) {
    // 前から出力
    while (!S.empty()){
      cout << S.front();
      S.pop_front();
    }
  } else {
    // 後ろから出力
    while (!S.empty()){
      cout << S.back();
      S.pop_back();
    }
  }
  cout << endl;

  return 0;

}
```
