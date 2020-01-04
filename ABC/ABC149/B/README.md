### ABC149

# B - Greedy Takahashi

  [問題はこちら](https://atcoder.jp/contests/abc149/tasks/abc149_b)


- 発想<br>
  A <= K のとき、高橋君のクッキーは 0 になる。<br>
  それ以外の場合は、高橋君のクッキーは A - K となる。<br>
  K - A が 1 以上の場合は、B <= K - A のとき青木君のクッキーは 0 になる。<br>
  K - A < B の場合は、青木君のクッキーは B - K - A になる。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    long long A, B, K;
    cin >> A >> B >> K;

    long long a = A;

    if (A <= K) {
      a = 0;
      K = K - A;
    } else {
      a = A - K;
      K = 0;
    }

    long long b = B;

    if (B <= K) {
      b = 0;
    } else {
      b = B - K;
    }

    cout << a << " " << b << endl;

  }
  ```
    