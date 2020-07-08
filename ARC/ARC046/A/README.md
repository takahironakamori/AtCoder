### ARC046

# A - ゾロ目数

[問題はこちら](https://atcoder.jp/contests/arc046/tasks/arc046_a)


## 発想

  50 番目が 555555 なので、1から全探索で全部の桁が同じ文字か調べる。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

bool f (string s) {
  bool result = true;
  for (int i = 0; i < s.size() - 1; i++) {
    if (s[i] != s[i+1]) {
      result = false;
      break;
    }
  }
  return result;
}

int main() {

  int N;
  cin >> N;

  int count = 0;
  int current = 1;

  bool flg = true;
  while (flg) {
    if (f(to_string(current))) {
      count++;
      if (count == N) {
        flg = false;
        break;
      }
    }
    current++;
  }

  cout << current << endl;
  return 0;

}
```
