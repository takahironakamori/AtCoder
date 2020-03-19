### ABC108

# C - Triangular Relationship

  [問題はこちら](https://atcoder.jp/contests/abc108/tasks/abc108_b)


## 発想

  Kが奇数のときは、a,b,cはKで割り切れる必要がある。<br>
  NのうちKで割り切れる数字の数はN÷Kで求めることができる。<br>
  Kが偶数のときは、a,b,cはKで割り切れるかK/2で割り切れる必要がある。<br>
  NのうちK/2で割り切れる数字の数はN÷(K/2)で求めることができるが、これにはNのうちKで割り切れる数字の個数も含まれているので、その数を引く。

## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, K;
    cin >> N >> K;

    long long answer = 0;

    if (K % 2 == 0) {
      long long c1 = N / K;
      long long c2 = N / (K / 2) - c1;
      answer = c1 * c1 * c1 + c2 * c2 * c2;
    } else {
      long long c = N / K;
      answer =(long long) c * c * c;
    }

    cout << answer << endl;

    return 0;

  }
  ```
