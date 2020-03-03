### ABC117

# D - XXOR

  [問題はこちら](https://atcoder.jp/contests/abc117/tasks/abc117_d)


## 発想

入力例1で考える。<br>
Kを無視して、A<sub>i</sub>を2進数で表記すると、以下のようになる。<br>

1 ... 0 0 1<br>
6 ... 1 1 0<br>
3 ... 0 1 1<br>

桁で見ると、<br>
1の位は1の方が多い ... x（2進数）の1の位は0<br>
10の位は1の方が多い ... x（2進数）の10の位は0<br>
100の位は1の方が多い ... x（2進数）の100の位は1<br>
x は 1 0 0 ... 4となる。<br>
<br>
このように、1の位から順番に以下の確認をしてxを求めるが、<br>
xがKを超える場合は、その位は見ない。<br>


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  long long K;
  cin >> N >> K;

  vector<long long> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  vector<int> count(40);

  // A[0]からA[N-1]までの各桁の1の数を集計
  for (int i = 0; i < N; i++) {
    for (int j = 40; 0 <= j; j--) {
      if (A[i] >> j & 1) {
        count[j]++;
      }
    }
  }

  long long X = 0;

  // 10^12、およそ40桁を調べてXを求める
  for (int i = 40; 0 <= i; i--) {

    // XはKを超えたらダメ
    if (X + (1LL << i) > K) {
      continue;
    }

    // 桁の1の数が0の数より少ない場合は、
    // Xのその桁は1にする
    if (count[i] < N - count[i]) {
      X += (1LL << i);
    }

  }

  long long answer = 0;

  // 答えを求める
  for (int i = 0; i < N; i++) {
    answer += X ^ A[i];
  }

  cout << answer << endl;

  return 0;

}
```
