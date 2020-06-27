### ARC003

# A - GPA計算

  [https://atcoder.jp/contests/arc003/tasks/arc003_1)


## 発想

  1文字ずつAからDのうちのどれかを判定して、GPA合計を計算し、最後に平均を計算する。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  string S;
  cin >> N >> S;

  int sum = 0;
  for (int i = 0; i < N; i++) {
    if (S[i] == 'A') {
      sum += 4;
    } else if (S[i] == 'B') {
      sum += 3;
    } else if (S[i] == 'C') {
      sum += 2;
    } else if (S[i] == 'D') {
      sum += 1;
    }
  }

  printf("%.16f", (double) sum / N);

  return 0;

}
```
