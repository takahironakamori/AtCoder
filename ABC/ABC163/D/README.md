### ABC163

# D - Sum of Large Numbers

  [問題はこちら](https://atcoder.jp/contests/abc163/tasks/abc163_d)


## 発想

  0からNまでの数のなかから、X個選んだときの和の個数を数える。<br>
  ここでの和の個数は、X個選んだときの最大値 - X個選んだときの最小値 + 1で求める。 <br>
  ここでのXは、KからN+1個までの範囲となる。<br>　
  この範囲の最小値(mn)は、X × (X + 1) / 2 - X で計算できる。<br>
  また最大値（mx）は、N × X から最小値を引いたものであり、<br>
  和の個数は mx - mn + 1 個となる。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

// mod（素数だけ）の処理を忘れさせてくれるライブラリ
// https://github.com/atcoder-live/library/blob/master/mint.cpp
const int mod = 1000000007;
struct mint {
  long long x;
  mint(long long x = 0):x((x % mod + mod) % mod) {}
  mint operator-() const {return mint(-x);}
  mint& operator+=(const mint a) {
    if ((x += a.x) >= mod) x -= mod;
    return *this;
  }
  mint& operator-=(const mint a) {
    if ((x += mod - a.x) >= mod) x -= mod;
    return *this;
  }
  mint& operator*=(const mint a) {
    (x *= a.x) %= mod;
    return *this;
  }
  mint operator+(const mint a) const {
    mint res(*this);
    return res+=a;
  }
  mint operator-(const mint a) const {
    mint res(*this);
    return res-=a;
  }
  mint operator*(const mint a) const {
    mint res(*this);
    return res*=a;
  }
  mint pow(long long t) const {
    if (!t) return 1;
    mint a = pow(t>>1);
    a *= a;
    if (t&1) a *= *this;
    return a;
  }
  mint inv() const {
    return pow(mod-2);
  }
  mint& operator/=(const mint a) {
    return (*this) *= a.inv();
  }
  mint operator/(const mint a) const {
    mint res(*this);
    return res /= a;
  }
};

int main() {

  long long N, K;
  cin >> N >> K;

  mint answer = 0;

  for (long long j = K; j <= N + 1; j++) {
    mint mn = j * (j + 1) / 2 - j;
    mint mx = N * j - mn.x;
    answer += mx.x - mn.x + 1;
  }

  cout << answer.x << endl;

  return 0;

}
```
