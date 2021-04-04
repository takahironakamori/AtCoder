### ABC197

# E - Traveler

  [問題文はこちら](https://atcoder.jp/contests/abc197/tasks/abc197_e)


## 発想

　・
  


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;
  
  const int INF = 1000000007;

  vector<int> l(N, INF);
  vector<int> r(N, -INF);
  for (int i = 0; i < N; ++i) {
    int x, c;
    cin >> x >> c;
    --c;
    l[c] = min(l[c], x);
    r[c] = max(r[c], x);
  }

  vector<pair<int, int>> point;
  point.push_back(make_pair(0,0));
  for (int i = 0; i < N; ++i) {
    if (l[i] != INF) {
      point.push_back(make_pair(l[i],r[i]));
    }
  }
  point.push_back(make_pair(0,0));

  vector<long long> dp(2);
  const long long LINF = 1LL << 60;
  for (int i = 1; i < int(point.size()); ++i) {
    vector<long long> sdp(2, LINF);
    swap(sdp, dp);
    int l = point[i].first;
    int r = point[i].second;
    for (int j = 0; j < 2; ++j) {
      int x;
      if (j == 0) {
        x = point[i-1].first;
      } else {
        x = point[i-1].second;
      }
      dp[0] = min(dp[0], sdp[j] + abs(x - r) + (r - l));
      dp[1] = min(dp[1], sdp[j] + abs(x - l) + (r - l));
    }
  }
  
  cout << dp[0] << endl;

  return 0;

}
```
