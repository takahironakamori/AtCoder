### ABC123

# C - Five Transportations

  [問題はこちら](https://atcoder.jp/contests/abc123/tasks/abc123_c)

## 発想

  A, B, C, D, E のうち最も小さい値（ m とする）を探す。<br>
  m 人は 5 分で都市 6 まで必ずいける。<br>
  N - m 人以降も、m 人ずつ都市 6 に移動するので、N - m を m で割る（切り上げ）。
  ※整理して、N / m（切り上げ）+ 4 で計算してもいい。

## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;


  int main() {

    long long N, A, B, C, D, E;
    cin >> N >> A >> B >> C >> D >> E;

    long long min_ = A;

    min_ = min(min_, B);
    min_ = min(min_, C);
    min_ = min(min_, D);
    min_ = min(min_, E);

    long long answer = ceil((double) (N - min_) / min_) + 5;

    cout << answer << endl;

    return 0;

  }
  ```
