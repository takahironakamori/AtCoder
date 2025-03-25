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
const int INF = 1001001001;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> A(N, 2);
  rep(i, K) {
    int a;
    cin >> a;
    a--;
    A[a] = 1;
  }

  vector<int> socks;
  rep(i, N) {
    if(A[i] == 1) {
      socks.push_back(i+1);
    } else {
      socks.push_back(i+1);
      socks.push_back(i+1);
    }
  }

  // for(auto item:socks) {
  //   cout << item << " ";
  // }
  // cout << endl;

  int n = socks.size();

  vector<int> sumL(n);
  for(int i = 0; i < n; i++) {
    if(i % 2 == 0 && i < n - 1) {
      if(i == 0) {
        sumL[i] = abs(socks[i] - socks[i+1]);
      } else {
        sumL[i] = abs(socks[i] - socks[i+1]) + sumL[i-1];
      }
    } else {
      sumL[i] = sumL[i-1];
    }
  }

  vector<int> sumR(n);
  int v = (n - 1) % 2;
  for(int i = n - 1; 0 <= i; i--) {
    if(i % 2 == v) {
      if(i == n - 1) {
        sumR[i] = abs(socks[i] - socks[i-1]);
      } else {
        sumR[i] = abs(socks[i] - socks[i-1]) + sumR[i+1];
      }
    } else {
      sumR[i] = sumR[i+1];
    }
  }

  if(n % 2 == 0) {
    cout << sumL[n-1] << endl;
    return 0;
  }

  // for(auto item:sumL) {
  //   cout << item << " ";
  // }
  // cout << endl;

  // for(auto item:sumR) {
  //   cout << item << " ";
  // }
  // cout << endl;

  int ans = INF;
  rep(i, n) {
    if(i == 0) {
      ans = min(ans, sumR[1]);
    } else if(i == n - 1) {
      ans = min(ans, sumL[n - 1]);
    } else {
      ans = min(ans, sumL[i-1] + sumR[i+1]);
    }
  }
  cout << ans << endl;
  return 0;
}
