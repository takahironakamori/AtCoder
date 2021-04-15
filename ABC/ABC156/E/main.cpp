#include <bits/stdc++.h>
using namespace std;

// mod の処理をよしなにしてくれるライブラリ
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

istream& operator>>(istream& is, const mint& a) { return is >> a.x;}
ostream& operator<<(ostream& os, const mint& a) { return os << a.x;}


// n_C_kを求めるライブラリ
// nCk n が大きくて k が小さい場合は下に
// mint.cppが必要
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

  // 和が N で 0 が K 個以下の数列の数を求める。
  
  // N 個の数列で 0 が i 個ある場合の 0 の場所の組み合わせは N_C_i 。
  // 1 以上の数は N - i 箇所あり、和は N となる。 --- a
  // a について、N - i 箇所ある 1 以上の数から 1 引くと、
  // a は 0 以上の数は 和は N - (N - i) = i となる。 
  // i 個ある 0 以上の数を N - i 箇所に配置する組み合わせの数は、
  // N-i-1+i_C_i となる。

  int n, k;
  cin >> n >> k;

  k = min(k , n - 1);
  
  // combinationの初期化
  // n を n よりちょっと多めに
  combination c(n + 5);

  mint ans;

  for (int i = 0; i <= k; ++i) {
    ans += c(n,i) * c((n-i-1)+i, i);
  }

  cout << ans << endl;
  return 0;

}