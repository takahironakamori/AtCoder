### ABC034

# C - 経路

  [問題はこちら](https://atcoder.jp/contests/abc034/tasks/abc034_c)


## 発想

  上にH-1回、右にW-1回移動する組み合わせの個数を求める。<br>
  これはH+W-2回移動する中から、H-1回移動する方法を求めることになる。<br>
  したがって、<sub>H+W-2</sub> C <sub>H-1</sub>と求める。


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

  // combination mod prime
  // https://www.youtube.com/watch?v=8uowVvQ_-Mo&feature=youtu.be&t=1619
  struct combination {
    vector<mint> fact, ifact;
    combination(int n):fact(n+1),ifact(n+1) {
      assert(n < mod);
      fact[0] = 1;
      for (int i = 1; i <= n; ++i) fact[i] = fact[i-1]*i;
      ifact[n] = fact[n].inv();
      for (int i = n; i >= 1; --i) ifact[i-1] = ifact[i]*i;
    }
    mint operator()(int n, int k) {
      if (k < 0 || k > n) return 0;
      return fact[n]*ifact[k]*ifact[n-k];
    }
  };

  int main() {

    int W, H;
    cin >> W >> H;

    combination c(W + H);

    mint answer = c(H + W - 2, H - 1);

    cout << answer.x << endl;

    return 0;

  }
  ```
