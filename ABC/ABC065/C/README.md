### ABC065

# C - Reconciled?

  [問題はこちら](https://atcoder.jp/contests/abc065/tasks/arc076_a)


## 発想

  NとMの差が2以上の場合はできない。<br>
  NとMの差が1の場合は、多い方、少ない方、多い方、少ない方、...、多い方となる。<br>
  NとMが同じ場合は、交互に並ぶパターンがNから始めた場合とMから始めた場合の2種類がある。


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  long long mod = 1000000007;

  long long f (long long a) {

    long long result = 1;

    for (int i = 1; i <= a; i++) {
      result *= i;
      result %= mod;
    }

    return result;
  }


  int main() {

    int N, M;
    cin >> N >> M;

    long long answer = 0;

    if (abs(N - M) <= 1) {
      if (N == M) {
        answer = f(N) * f(M) * 2;
      } else {
        answer = f(N) * f(M);
      }
      answer %= mod;
    }

    cout << answer << endl;

    return 0;

  }
  ```
