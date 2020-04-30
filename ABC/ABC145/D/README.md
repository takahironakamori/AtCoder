### ABC145

# D - Knight

  [問題はこちら](https://atcoder.jp/contests/abc145/tasks/abc145_d)


## 発想

  0,0 から始めて、合計 3 マス移動するので、X + Y が 3 の倍数じゃないとダメ。<br>
  X:Y は 1:2や2:1じゃないとダメ。<br>
  <sub>X+Y</sub> C <sub>X</sub> を計算する。<br>


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

  // n_C_kを求めるライブラリ
  // mint.cppが必要
  // https://github.com/atcoder-live/library/blob/master/combination.cpp
  struct combination {
    vector<mint> fact, ifact;
    combination(int n):fact(n+1),ifact(n+1) {
      assert(n < mod);
      fact[0] = 1;
      for (int i = 1; i <= n; i++) {
        fact[i] = fact[i-1] * i;
      }
      ifact[n] = fact[n].inv();
      for (int i = n; i >= 1; i--) {
        ifact[i-1] = ifact[i] * i;
      }
    }
    mint operator()(int n, int k){
      if (k < 0 || k > n) {
        return 0;
      } else {
        return fact[n] * ifact[k] * ifact[n-k];
      }
    }
  };

  int main() {

    int X, Y;
    cin >> X >> Y;

    // X + Y が 3 の倍数じゃ無いとダメ
    if ((X+Y) % 3 != 0) {
      cout << 0 << endl;
      return 0;
    }

    // X:Y が 2:1 または 1:2 じゃないとダメ
    int n = (X + Y) / 3;
    X -= n;
    Y -= n;
    if (X < 0 || Y < 0) {
      cout << 0 << endl;
      return 0;
    }

    // combinationの初期化
    // n を N よりちょっと多めに
    combination c(X+Y);

    // n_C_x mod p が全部で何通りあるかを計算する
    mint answer = c(X+Y, X);

    cout << answer.x << endl;

    return 0;

  }
  ```
