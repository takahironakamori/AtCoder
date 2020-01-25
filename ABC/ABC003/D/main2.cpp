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

  int R, C, X, Y, D, L;
  cin >> R >> C >> X >> Y >> D >> L;

  // R * C から X * Y が何回取れるか...(1
  mint count = (R - X + 1) * (C - Y + 1);
  // cout << count.x << endl;

  // combinationの初期化
  // X * Y をちょっと多めで
  combination c(X * Y + 100);

  // n_C_k mod p が全部で何通りあるかを計算する...(2
  mint nCk = c(X * Y, D);

  // 答え = (1 * (2
  mint answer = nCk.x * count.x;
  cout << answer.x << endl;

}
