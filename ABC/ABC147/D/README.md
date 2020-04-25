### ABC147

# D - Xor Sum 4

  [問題はこちら](https://atcoder.jp/contests/abc147/tasks/abc147_d)


## 発想

  bit演算は桁ごとに独立している。<br>
  A_1 から A_N までを順番に調べるのではなく、<br>
  A_1 から A_N までを桁ごとに調べる。<br>
  A_1 から A_N までをK桁目のXORは、K桁目の0の個数 × K桁目の1の個数 × 2<sup>K</sup> となる。
  これを全部の桁分やる。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

const int mod = 1000000007;

int main() {

  int N;
  cin >> N;

  vector<long long> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  long long answer = 0;

  // 桁ごとに考える
  // A_i の最大は、2進数で60桁
  for (int i = 0; i < 60; i++) {

    // すべてのAのi桁目の1の個数を数える
    long long count = 0;
    for (int j = 0; j < N; j++) {
      if (A[j] >> i & 1) {
        ++count;
      }
    }

    // 1の個数 × 0の個数 × 2の桁乗
    // まずは、1の個数 × 0の個数 を計算しておく
    long long v = count * (N - count) % mod;

    // 2の桁乗を計算する
    for (int j = 0; j < i; j++) {
      v = v * 2 % mod;
    }

    answer += v;
    answer %= mod;

  }

  cout << answer << endl;

  return 0;

}
```
