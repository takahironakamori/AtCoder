#include <bits/stdc++.h>
using namespace std;

// mod の処理をよしなにしてくれるライブラリ
const int mod = 998244353;
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

  int N, M, K;
  cin >> N >> M >> K;

  combination c(200010);

  mint ans = 0;
  mint color = M;
  for (int i = N - 1; 0 <= i; --i) {
    mint current = color;
    current *= c(N - 1, i);
    if (i <= K) {
      ans += current;
    }
    color *= M - 1;
  }

  cout << ans << endl;
  return 0;

}