#include <bits/stdc++.h>
using namespace std;


int main() {

  // DP[宝箱の集合S]: S をすべて開けることができる鍵の最小コスト1
  // 集合は2進数で持つ
  
  int INF = 1000000001; 

  int N, M;
  cin >> N >> M;

  vector<pair<int, int>> key;
  for (int i = 0; i < M; ++i) {
    int a, b;
    cin >> a >> b;
    int s = 0;
    for (int j = 0; j < b; ++j) {
      int c;
      cin >> c;
      --c;
      s |= 1<<c;
    }
    key.push_back(make_pair(s, a));
  }

  vector<int> dp(1<<N, INF);
  dp[0] = 0;
  for (int i = 0; i < 1<<N; ++i) {
    for (int j = 0; j < M; ++j) {
      int k = i | key[j].first;
      int cost = dp[i] + key[j].second;
      dp[k] = min(dp[k], cost);
    }
  }

  int ans = dp[dp.size() - 1];
  if (ans == INF) {
    ans = -1;
  }
  cout << ans << endl;
  return 0;

}