### ABC133

# E - Virus Tree 2

  [問題はこちら](https://atcoder.jp/contests/abc133/tasks/abc133_e)

- 発想<br>


- コード（C++）

  ```cpp
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

  // n_C_k を求める
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

  combination c(100010);

  // n_P_k を求める
  // mint.cpp が必要
  // n_C_k を求める combination が必要 
  // combination の fact は階乗(k!)
  mint permutation(int n, int k) {
    if (n < 0) {
      return 0;
    }
    // n_P_k = n_C_k * k!
    mint result = c(n,k);
    result *= c.fact[k];
    return result;
  }

  int N, K;
  mint ans;
  vector<vector<int>> to(100010);

  void dfs(int v, int p) {
    for (int i : to[v]) {
      if (i == p) {
        continue;
      }
      dfs(i, v);
    }

    // 根の場合だけ K 色から選べる。その他は　K - 2 色から選ぶ。
    int colors = K - 2;
    if (p == -1) {
      colors = K;
    }

    // 選ぶ必要がある数は根の場合は、そことつながっている数＋1(自分)。
    // その他はそことつながっている数 - 1(親)
    int select = to[v].size() - 1;
    if (p == -1) {
      select = to[v].size() + 1;
    }

    ans *= permutation(colors, select);
    
  }

  int main() {

    cin >> N >> K;

    for (int i = 0; i < N-1; ++i) {
      int a, b;
      cin >> a >> b;
      --a;
      --b;
      to[a].push_back(b);
      to[b].push_back(a);
    }

    ans = 1;
    dfs(0, -1);

    cout << ans << endl; 

    return 0;

  }
  ```
