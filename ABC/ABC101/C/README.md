### ABC101

# C - Minimization

  [問題はこちら](https://atcoder.jp/contests/abc101/tasks/arc099_a)


## 発想

  全部1にすることになる。<br>
  K個選択したときに1にすることができるのは、K - 1個なので、N ÷ (K - 1)（切り上げ）で必要な回数となる。  


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, K;
    cin >> N >> K;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
      cin >> A[i];
    }

    int answer = 0;

    answer = ceil((double) (N - 1) / (K - 1));

    cout << answer << endl;

    return 0;

  }
  ```
