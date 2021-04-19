### ABC185

# E - Sequence Matching

  [問題文はこちら](https://atcoder.jp/contests/abc185/tasks/abc185_e)


## 発想

　・
  


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;


int main() {

  // 最長共通部分列（LCS）みたいな問題

  int INF = 1000000007;

  int N, M;
  cin >> N >> M;

  vector<int> A(N);
  vector<int> B(M);
  for (int i = 0; i < N; ++i) {
    cin >> A[i];
  }
  for (int i = 0; i < M; ++i) {
    cin >> B[i];
  }

  vector<vector<int>> dp(N+1, vector<int>(M+1, INF));
  dp[0][0] = 0;

  for (int i = 0; i < N+1; ++i) {
    for (int j = 0; j < M+1; ++j) {
      if (i < N) {
        dp[i+1][j] = min(dp[i+1][j], dp[i][j]+1);
      }
      if (j < M) {
        dp[i][j+1] = min(dp[i][j+1], dp[i][j]+1);
      }
      if (i < N && j < M) {
        int cost = 0;
        if (A[i] != B[j]) {
          cost = 1;
        }
        dp[i+1][j+1] = min(dp[i+1][j+1], dp[i][j]+cost);
      }
    }
  }
  
  cout << dp[N][M] << endl;

  return 0;

}
```
