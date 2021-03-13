### PAST(第1回)

# B - 増減管理

  [問題はこちら](https://atcoder.jp/contests/past201912-open/tasks/past201912_b)


- 発想<br>
  配列で受け取り、2つ目の要素から1つ前と比較して答えを出力する。


- コード（C++）

  ```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<int> A(N);

  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  for (int i = 1; i < N; i++) {
    if (A[i-1] == A[i]) {
      printf("stay");
      printf("\n");
    } else if (A[i-1] < A[i]) {
      printf("up %d", A[i] -  A[i-1]);
      printf("\n");
    } else {
      printf("down %d", A[i-1] -  A[i]);
      printf("\n");
    }
  }

  return 0;

}
  ```
    