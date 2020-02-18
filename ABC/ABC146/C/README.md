### ABC146

# C - Buy an Integer

  [問題はこちら](https://atcoder.jp/contests/abc146/tasks/abc146_c)


- 発想<br>
  l を -1<br>
  r を 1000000001<br>
  で、l から r の間で二分探索を使って N を決める。<br>


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  long long digit(long long a) {
    long long result = 0;
    while (a > 0) {
      result++;
      a /= 10;
    }
    return result;
  }

  int main() {

    long long A, B, X;
    cin >> A >> B >> X;

    long long INF = 1000000001;

    long long l = -1;
    long long r = INF;

    while (l + 1 < r) {
      long long N = (l + r) / 2;
      long long digit_ = digit(N);
      long long x = A * N + B * digit_;
      if (X < x){
        r = N;
      } else {
        l = N;
      }
    }

    cout << l << endl;

    return 0;

  }
  ```
