### ABC090

# D - Remainder Reminder

  [問題はこちら](https://atcoder.jp/contests/abc090/tasks/arc091_b)


## 発想

  - 一旦、bを定数で考え、0 ≦ a ≦ N とすると、0 % b, 1 % b, 2 % b, ..., N % b のうち K 以上のものが何個あるかを数えることになる。
  - ここで、0 % b, 1 % b, 2 % b, ..., N % b は、0, 1, 2, ... b - 1, 0, 1, 2, ... b - 1, 0, 1, 2, ... b - 1, 0, 1, ... N % b と 0 から b - 1 までを繰り返す部分と、0 ... N % b で終わる部分に分けることができ、前者は N / b 回繰り返される。
  - 前者のうちあまりが K 以上になるのは、max(0, b - k)個あり、後者のうちあまりが K 以上になるのは、max(0, r - K + 1) 個ある。
  - したがって、ある a についてあまりが K 以上になるのは、p * max(0, b - K) + max(0, (r - K + 1)) 個となる。
  - しかし、K が 0 の場合は、あまり0を個数に数えてしまっているので、1個引く必要がある。
  - 以上で 0 ≦ a ≦ N の場合を、O(1)で計算することができるようになったので、b が 1 から N までを繰り返す。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;


int main() {

  int N, K;
  cin >> N >> K;

  long long answer = 0;

  for (int b = 1; b <= N; b++) {
    int p = N / b;
    int r = N % b;
    answer += (long long) p * max(0, b - K);
    answer += max(0, (r - K + 1));

    // K が 0の場合は0%bも数えてしまっているため引く
    if (K == 0) {
      answer -= 1;
    }

  }

  cout << answer << endl;

}
```
