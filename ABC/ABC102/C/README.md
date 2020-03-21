### ABC102

# C - Linear Approximation

  [問題はこちら](https://atcoder.jp/contests/abc102/tasks/arc100_a)


## 発想

  B<sub>i</sub> = A<sub>i</sub> - i とするとabs(B<sub>i</sub> - b)の総和を最小値が回答となる。<br>
  bはB<sub>i</sub> の中央値にする。


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    vector<int> A(N);
    vector<int> B(N);
    for (int i = 0; i < N; i++) {
      cin >> A[i];
      B[i] = A[i] - (i + 1);
    }

    sort(B.begin(), B.end());

    long long answer = 0;

    int d_ = 0;

    d_ = N / 2;

    for (int i = 0; i < N; i++) {
      answer += abs(A[i] - (B[d_] + i + 1));
    }

    cout << answer << endl;

    return 0;

  }
  ```
