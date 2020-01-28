### ABC153

# B - Common Raccoon vs Monster

  [問題はこちら](https://atcoder.jp/contests/abc153/tasks/abc153_b)


- 発想<br>
  A_1 から A_N までの合計が H 以上の場合は YES、<br>
  そうでない場合は NO となる。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int H, N;
    cin >> H >> N;

    int sum = 0;
    for (int i = 0; i < N; i++) {
      int a_;
      cin >> a_;
      sum += a_;
    }

    if (H <= sum) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }

  }
  ```
