### ABC003

# D - AtCoder社の冬

  [問題はこちら](https://atcoder.jp/contests/abc003/tasks/abc003_4)


- 発想<br>
  まず、mod や <sub>n</sub> C <sub>k</sub> の計算は、ライブラリを利用すると楽。

  ・[mod のライブラリはこちら](https://github.com/takahironakamori/Programming_Contest_Memo/tree/master/数学/mod)<br>
  ・[<sub>n</sub> C <sub>k</sub> の計算のライブラリはこちら](https://github.com/takahironakamori/Programming_Contest_Memo/tree/master/数学/n_C_k_(mod_p)_を計算する)

  【部分点・AC共通】<br>
  ・R × C から X × Y が何個取れるかを数える。 ... (1<br>

  【部分点のみ】<br>
  ・X × Y の中で D + L を配置できるパターンの数を計算する。<br>
  　X × Y = D + L の場合は、DとLどちらかだけでパターン数は計算できるので、<br>
  　<sub>D + L</sub> C <sub>D</sub> でいい。... (2<br>
  ・(1 × (2 が答え。<br>

  【ACのみ】<br>
  「 4 つの壁に D か L が 1 つ以上ひっついているケース」を数えるのではなく、<br>
  全てのパターンから「 4 つの壁のどれかの壁に D か L のどちらもひっついていないケース」を引く。<br>
  包除原理を使う。<br>
  ・X × Y の中で D + L を配置できるパターンの数を計算する。<br>
  　X × Y ≠ D + L の場合は、<br>
  　X × Yに D を配置するパターン数 ×<br>
  　D 設置後の X × Y（すなわち X × Y - D）に L を配置するパターン数<br>
  　になるので、<br>
  　<sub>X × Y</sub> C <sub>D</sub> × <sub>X × Y - D</sub> C <sub>L</sub> となる。... (2。<br>
  ・以下コードのように (2 に加える、引くを繰り返す。
  ・(1 × (2 が答え。<br>


- 部分点コード (C++) main2.cpp

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


- ACコード（C++）main.cpp

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

    int R, C, X, Y, D, L;
    cin >> R >> C >> X >> Y >> D >> L;

    // R * C から X * Y が何回取れるか...(1
    mint count = (R - X + 1) * (C - Y + 1);

    // combinationの初期化
    // X * Y をちょっと多めで
    combination c(X * Y + 100);

    // n_C_k mod p が全部で何通りあるかを計算する。
    // まずは全体...(2
    mint nCk = c(X * Y, D) * c(X * Y - D, L);

    // --- (2 から引く ---
    // (X-1) * Y （上下どちらか 1 行分）
    nCk -= c((X - 1) * Y, D) * c((X - 1) * Y - D, L) * 2;
    // X * (Y-1) （左右どちらか 1 列分）
    nCk -= c(X * (Y - 1), D) * c(X * (Y - 1) - D, L) * 2;

    // --- (2 に加える ---
    // (X - 1) * (Y - 1)（上下どちらか 1 行 + 左右どちらか 1 列）
    nCk += c((X - 1) * (Y - 1), D) * c((X - 1) * (Y - 1) - D, L) * 4;
    // (X - 2) * y（上下 1 行ずつで 2 行）
    nCk += c((X - 2) * Y, D) * c((X - 2) * Y - D, L);
    // X * (y - 2)（左右 1 列ずつの 2 列）
    nCk += c(X * (Y - 2), D) * c(X * (Y - 2) - D, L);

    // --- (2 から引く ---
    // (X - 2) * (Y - 1)（上下 1 行ずつで 2 行 + 左右どちらか 1 列）
    nCk -= c((X - 2) * (Y - 1), D) * c((X - 2) * (Y - 1) - D, L) * 2;
    // (X - 1) * (Y - 2)（上下どちらか 1 行 + 左右 1 列ずつの 2 列）
    nCk -= c((X - 1) * (Y - 2), D) * c((X - 1) * (Y - 2) - D, L) * 2;

    // --- (2 に加える ---
    // (X - 2) * (Y - 2)（上下 1 行ずつで 2 行 + 左右 1 列ずつの 2 列）
    if (0 <= X - 2 && 0 <= Y - 2) {
      nCk += c((X - 2) * (Y - 2), D) * c((X - 2) * (Y - 2) - D, L);
    }

    // 答え(1 * (2
    mint answer = nCk.x * count.x;
    cout << answer.x << endl;

  }
  ```
