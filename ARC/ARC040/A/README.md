### ARC040

# A - 床塗り

[問題はこちら](https://atcoder.jp/contests/arc040/tasks/arc040_a)


## 発想

  1文字ずつ数える。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  int countR = 0;
  int countB = 0;

  for (int i = 0; i < N; i++) {
    string S;
    cin >> S;
    for (int j = 0; j < (int) S.size(); j++){
      if (S[j] == 'R') {
        countR++;
      }
      if (S[j] == 'B') {
        countB++;
      }
    }
  }

  if (countR == countB) {
    cout << "DRAW" << endl;
  } else if(countB < countR) {
    cout << "TAKAHASHI" << endl;
  } else {
    cout << "AOKI" << endl;
  }
  return 0;

}
```
