### ABC156

# D - Bouquet

  [問題はこちら](https://atcoder.jp/contests/abc156/tasks/abc156_d)


## 発想

  n種類の花については、花束に使う/使わないの2通りあるので全部で2<sup>n</sup>-1通りある。<br>
  2<sup>n</sup> - 1 - nCa - nCb で計算することができる。<br>
  2<sup>n</sup>-1は繰り返し二乗法で計算する。<br>
  nCaやnCbについても、nが大きくaやbが小さいので、普通に計算はできないのでループで計算する。<br>
  

## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

// mod の処理を忘れさせてくれるライブラリ
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

// 繰り返し自乗法で 2 の n 乗を計算する
mint f (int n) {
  if (n == 0) {
    return 1;
  }
  mint x = f(n / 2);
  x *= x;
  if (n % 2 == 1) {
    x *= 2;
  }
  return x;
}

// a 回のループで計算する
mint choose (int n, int a) {
  mint x = 1;
  mint y = 1;
  for (int i = 0; i < a; i++) {
    x *= n - i;
    y *= i + 1;
  }
  return x / y;
}

int main() {

  int n, a ,b;
  cin >> n >> a >> b;

  mint answer = f(n);

  // 0 本パターンを引く
  answer -= 1;

  // nCa を引く
  answer -= choose(n, a);

  // nCb を引く
  answer -= choose(n, b);

  cout << answer.x << endl;

  return 0;

}
```
