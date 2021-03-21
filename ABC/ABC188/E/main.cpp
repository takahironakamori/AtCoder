#include <bits/stdc++.h>
using namespace std;


int main() {

  int N, M;
  cin >> N >> M;

  vector<int> A(N);

  for (int i = 0; i < N; ++i) {
    cin >> A[i];
  }

  vector<vector<int>> graph(N);
  
  for (int i = 0; i < M; ++i) {
    int X, Y;
    cin >> X >> Y;
    X--;
    Y--;
    graph[X].push_back(Y);
  }
  
  vector<int> cost(N, INT_MAX);
  int ans = INT_MIN;

  for (int i = 0; i < N; ++i) {
    ans = max(ans, A[i] - cost[i]);
    cost[i] = min(cost[i], A[i]);
    for (int j = 0; j < int(graph[i].size()); ++j) {
      int n = graph[i][j];
      cost[n] = min(cost[i], cost[n]);
    }
  }

  cout << ans << endl;

  return 0;

}