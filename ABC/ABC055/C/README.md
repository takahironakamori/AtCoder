### ABC055

# C - Scc Puzzle

  [問題はこちら](https://atcoder.jp/contests/abc055/tasks/arc069_a)

## 発想

  N × 2 が M 以上の場合、M / 2が回答となる。<br>
  そうでない場合、Nで使ったMの残りを4で割った数とNを合わせた数が回答となる。
  

## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    long long N, M;
    cin >> N >> M;

    long long answer = 0;

    if (M <= N * 2) {
      answer = M / 2;
    } else {
      answer = N + (M - N * 2) / 4;
    }

    cout << answer <<  endl;

    return 0;

  }
  ```
