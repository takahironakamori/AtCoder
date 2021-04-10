#include <bits/stdc++.h>
using namespace std;

int vMax = 1010 * 1010 / 2;

// 辺
vector<vector<int>> to(vMax);
// dp[i]: i から出発したときの最長経路
vector<int> dp(vMax);
// 頂点が訪問済みか未訪問か
vector<bool> visited(vMax);
// 計算済みか否か
vector<bool> calcucated(vMax);

int dfs(int v) {
  if (visited[v]) {
    // ループになっている場合
    if (calcucated[v] == false) {
      return -1;
    }
    return dp[v];
  }
  visited[v] = true;
  dp[v] = 1;
  for (int i = 0; i < int(to[v].size()); ++i) {
    int result = dfs(to[v][i]);
    if (result == -1) {
      return -1;
    }
    dp[v] = max(dp[v], result + 1);
  }
  calcucated[v] = true;
  return dp[v];
}

int main() {

  // 試合を頂点とした有向グラフの最長経路を求める問題と考える
  
  int N;
  cin >> N;
  
  vector<vector<int>> A(N, vector<int>(N-1));
  for (int i = 0; i < N; ++i){
    for (int j = 0; j < N-1; ++j){
      cin >> A[i][j];
      A[i][j]--;
    }
  }

  // 各試合に id（頂点番号） をつける
  int V = 0;
  vector<vector<int>> id(1005, vector<int>(1005));
  for (int i = 0; i < N; ++i){
    for (int j = 0; j < N; ++j){
      if (i < j) {
        id[i][j] = V;
        V++;
      }
    }
  }

  // A[i][j] を頂点番号に変え、逆向きで辺で結ぶ
  for (int i = 0; i < N; ++i){
    for (int j = 0; j < N-1; ++j){
      int k = A[i][j];
      if (k < i) {
        A[i][j] = id[k][i];
      } else {
        A[i][j] = id[i][k];
      }
    }
    for (int j = 0; j < N-2; ++j) {
      to[A[i][j+1]].push_back(A[i][j]);
    }
  }

  int ans = 0;

  // 最長辺を各頂点でDP
  for (int i = 0; i < V; ++i){
    int result = dfs(i);
    if (result == -1) {
      cout << -1 << endl;
      return 0;
    }
    ans = max(ans, result);
  }
  cout << ans << endl;

  return 0;

}