### ABC012

# C - 九九足し算

  [問題はこちら](https://atcoder.jp/contests/abc012/tasks/abc012_3)


## 発想

  1×1から順番に、掛け算とNを加えたものが2025になれば、その掛け算を出力する。


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    for (int i = 1; i < 10; i++) {
      for (int j = 1; j < 10; j++) {
        if ((N + i * j) == 2025) {
          cout << i << " x " << j << endl;
        }
      }
    }

    return 0;

  }
  ```
