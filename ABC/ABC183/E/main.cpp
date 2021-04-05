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


int main() {

  int H, W;
  cin >> H >> W;

  vector<string> S(H);

  for (int i = 0; i < H; ++i) {
      cin >> S[i];
  }

  vector<vector<mint>> dp(2010, vector<mint>(2010));
  vector<vector<mint>> dpx(2010, vector<mint>(2010));
  vector<vector<mint>> dpy(2010, vector<mint>(2010));
  vector<vector<mint>> dpxy(2010, vector<mint>(2010));
  
  dp[0][0] = 1;
  dpx[0][0] = 1;
  dpy[0][0] = 1;
  dpxy[0][0] = 1;

  for (int i = 0; i < H; ++i) {
    for (int j = 0; j < W; ++j) {
      if (i == 0 && j == 0) {
        continue;
      }
      if (S[i][j] == '#') {
        continue;
      }
      if (0 < j) {
        dpx[i][j] += dpx[i][j-1];
      }
      if (0 < i) {
        dpy[i][j] += dpy[i-1][j];
      }
      if (0 < i && 0 < j)  {
        dpxy[i][j] += dpxy[i-1][j-1];
      }
      dp[i][j] += dpx[i][j];
      dp[i][j] += dpy[i][j];
      dp[i][j] += dpxy[i][j];
      dpx[i][j] += dp[i][j];
      dpy[i][j] += dp[i][j];
      dpxy[i][j] += dp[i][j];
    }
  }

  cout << dp[H - 1][W - 1] << endl;
  
  return 0;

}