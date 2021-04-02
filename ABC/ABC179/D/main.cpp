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


int main() {
  
  int N, K;
  cin >> N >> K;

  vector<int> L(N);
  vector<int> R(N);
  for (int i = 0; i < K; ++i) {
    cin >> L[i] >> R[i];
  }

  vector<mint> dp(N+1);
  vector<mint> sum(N+1);
  dp[1] = 1;
  sum[1] = 1;

  for (int i = 2; i <= N; ++i) {
    for (int j = 0; j < K; ++j) {
      int l = i - R[j];
      int r = i - L[j];
      if (r < 0) {
        continue;
      }
      l = max(l, 1);
      dp[i] += sum[r] - sum[l-1];
    }
    sum[i] = sum[i-1] + dp[i];
  }
  
  cout << dp[N] << endl;

  return 0;

}