### ABC135

# C - City Savers

  [問題はこちら](https://atcoder.jp/contests/abc135/tasks/abc135_c)


## 発想

  i番目の町にいる場合、まずA[i],B[i]の小さい方だけ倒すことができる。<br>
  そして、B[i]から倒した数を引いた残りとA[i+1]の小さい方だけ倒すことができる。<br>
  これをNまで繰り返す。


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    vector<int> A(N+1);
    for (int i = 0; i <= N; i++) {
      cin >> A[i];
    }

    vector<int> B(N);
    for (int i = 0; i < N; i++) {
      cin >> B[i];
    }

    long long answer = 0;

    for (int i = 0; i < N; i++) {

      int mn = min(A[i], B[i]);
      A[i] -= mn;
      B[i] -= mn;
      answer += mn;

      int mn2 = min(A[i+1], B[i]);
      A[i+1] -= mn2;
      B[i] -= mn2;
      answer += mn2;

    }

    cout << answer << endl;

    return 0;

  }
  ```
