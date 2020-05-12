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

// nCk n が大きくて k が小さい場合
mint f(int n, int a) {
  mint x = 1;
  mint y = 1;
  for (int i = 0; i < a; i++) {
    x *= n - i;
    y *= i + 1;
  }
  return x / y;
}

int main() {

  int N, K;
  cin >> N >> K;

  mint answer = 0;

  for (int i = 1; i <= K; i++) {
    answer = f(N - K + 1, i) * f(K - 1, i - 1);
    cout << answer.x << endl;
  }

  return 0;
}
