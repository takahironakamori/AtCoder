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


// 素数をいい感じに扱うライブラリ
struct Sieve {

  int n;
  vector<int> f;
  vector<int> primes;

  Sieve(int n = 1):n(n), f(n+1) {
    f[0] = -1;
    f[1] = -1;
    for (long long i = 2; i <= n; ++i) {
      if (f[i]) {
        continue;
      }
      primes.push_back(i);
      f[i] = i;
      for (long long j = i * i; j <= n; j += i) {
        if (!f[j]) {
          f[j] = i;
        }
      }
    }
  }

  // x が素数か否かを返す
  bool isPrime(int x) {
    return f[x] == x;
  }

  // x までの素数を返す
  vector<int> factorList(int x) {
    vector<int> result;
    while (x != 1) {
      result.push_back(f[x]);
      x /= f[x];
    }
    return result;
  }

  // x を素因数分解した結果を返す
  vector<pair<int,int>> factor(int x) {
    vector<int> list = factorList(x);
    if (list.size() == 0) {
      return {};
    }
    vector<pair<int,int>> result(1, make_pair(list[0], 0));
    for (int v: list) {
      if (result.back().first == v) {
        result.back().second++;
      } else {
        result.emplace_back(v, 1);
      }
    }
    return result;
  }

};


int main() {

  Sieve sieve(1e6);

  int N;
  cin >> N;

  vector<int> A(N);
  for (int i = 0; i < N; ++i) {
    cin >> A[i];
  }

  map<int, int> mp;
  for (int i = 0; i < N; ++i) {
    auto f = sieve.factor(A[i]);
    for (auto item: f) {
      mp[item.first] = max(mp[item.first], item.second);
    }
  }

  mint lcm = 1;
  for (auto item: mp) {
    for (int i = 0; i < item.second; ++i) {
      lcm *= item.first;
    }
  }

  mint ans;
  for (int i = 0; i < N; ++i) {
    mint B = lcm / A[i];
    ans += B;
  }

  cout << ans << endl;

  return 0;

}