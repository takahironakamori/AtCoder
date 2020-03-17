### ABC138

# C - Alchemist

  [問題はこちら](https://atcoder.jp/contests/abc138/tasks/abc138_c)


## 発想

  vを小さい順に並び替えて、<br>
  まず、最初の2個の平均を出す。<br>
  その平均と3個目の平均を出す。<br>
  その平均と4個目の平均...<br>
  と最後までやる。


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    vector<int> v(N);
    for (int i = 0; i < N; i++) {
      cin >> v[i];
    }

    sort(v.begin(), v.end());

    double answer = v[0];

    for (int i = 1; i < N; i++) {
      answer = (answer + v[i]) / 2;
    }

    printf("%.16f", answer);
    printf("\n");

    return 0;

  }
  ```
