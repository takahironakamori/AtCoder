### ABC151

# E - Max-Min Sums

  [問題はこちら](https://atcoder.jp/contests/abc151/tasks/abc151_e)


- 発想<br>
  A をソートする。<br>
  f(X) = maxX - minX を、maxX の合計から minX の合計を引くと読み換える。<br>
  数列が 1、3、5、6、7、10 と並んでおり、K を 3 と仮定とすると、<br>
  7 を最大値する 3 個の組み合わせは、<sub>4</sub>C<sub>3</sub>となる。<br>
  
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  // mod（素数だけ）の処理を忘れさせてくれるライブラリ
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

    int N, K;
    cin >> N >> K;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
      cin >> A[i];
    }

    sort(A.begin(), A.end());

    // combinationの初期化
    // n を N よりちょっと多めに
    combination c(N+5);

    // 最大値の総和
    mint answer = 0;

    for (int i = 0; i < N; i++) {
      mint count = c(i, K-1);
      answer += count * A[i];
    }

    // 最小値の総和
    reverse(A.begin(), A.end());

    for (int i = 0; i < N; i++) {
      mint count = c(i, K-1);
      answer -= count * A[i];
    }

    cout << answer.x << endl;

  }
  ```
    