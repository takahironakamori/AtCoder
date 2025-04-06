#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
// using mint = modint998244353;
// using mint = modint1000000007;
// const int mod = 1000000007;
// const ll INF = 1LL << 62;
// const int INF = 1001001001;

// 整数の平方根（floor値）を求める関数
ll isqrt(ll x) {
  ll low = 0, high = 1000000001LL; // √(10^18) は約 10^9 なので、高めに設定
  while (low <= high) {
      ll mid = (low + high) / 2;
      if (mid * mid <= x)
          low = mid + 1;
      else
          high = mid - 1;
  }
  return high; // high が floor(√x) となる
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll N;
  cin >> N;

  ll ans = 0;
  // X = 2^c * t^2 (c>=1, tは奇数) の形で、2^c * t^2 <= N を満たすものを考える
  for (int c = 1; ; c++){
      ll two = 1LL << c;
      if (two > N) break; // 2^c > N のとき、これ以降は条件を満たさない

      // N / 2^c 以下の整数の中で、t^2 <= N / 2^c を満たす最大の t を
      // 整数平方根関数 isqrt を用いて求める
      ll x = N / two;
      ll M = isqrt(x);
      if (M < 1) break;

      // 1～M までの奇数の個数は (M+1)/2 で求められる
      ans += (M + 1) / 2;
  }

  cout << ans << "\n";
  return 0;
}
