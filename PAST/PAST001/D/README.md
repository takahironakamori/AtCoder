### PAST(第1回)

# D - 重複検査

  [問題はこちら](https://atcoder.jp/contests/past201912-open/tasks/past201912_d)


- 発想<br>
  1 から N までの数字が何回あったかを配列で数える。<br>
  0 回だった数値が x になり、2 回だった数値が y になる。


- コード（C++）

  ```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<int> A(N+1);

  int x = 0;
  int y = 0;

  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    A[a]++;
  }

  for (int i = 1; i <= N; i++) {
    if (A[i] == 0) {
      x = i;
    } else if (A[i] == 2) {
      y = i;
    }
  }

  if (x == 0) {
    cout << "Correct" << endl;
  } else {
    printf("%d %d", y, x);
    printf("\n");
  }

  return 0;

}
  ```
    