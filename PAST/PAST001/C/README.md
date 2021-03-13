### PAST(第1回)

# C - 3 番目

  [問題はこちら](https://atcoder.jp/contests/past201912-open/tasks/past201912_c)


- 発想<br>
  A, B, C, D, E, Fを配列で受け取り、降順に並び替えて3番目の要素を出力する。


- コード（C++）

  ```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  vector<int> A(6);

  for (int i = 0; i < 6; i++) {
    cin >> A[i];
  }

  sort(A.begin(), A.end(), greater<int>());

  cout << A[2] << endl;

  return 0;

}
  ```
    