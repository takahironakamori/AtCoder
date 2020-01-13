### ABC151

# B - Achieve the Goal

  [問題はこちら](https://atcoder.jp/contests/abc151/tasks/abc151_b)


- 発想<br>
  1 科目から N - 1 科目までの点数の合計を計算する。<br>
  M * N から合計を引くと平均点 M を維持できる最低点となる。<br>
  最低点は K 以下でないとダメ。<br>
  M * N から合計を引くと 0 未満になる場合があるので、<br>
  出力は 0 と 最低点で大きい方を出力する。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, K, M;
    cin >> N >> K >> M;

    int sum = 0;

    for(int i = 0; i < N-1; i++) {
      int A;
      cin >> A;
      sum += A;
    }

    int answer = M * N - sum;

    if (answer <= K) {
      cout << max(0, answer) << endl;
    } else {
      cout << -1 << endl;
    }

  }
  ```
    