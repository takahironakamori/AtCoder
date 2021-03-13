#include <bits/stdc++.h>
using namespace std;


int main() {

  int N, M;
  cin >> N >> M;

  int INF = -100000007;

  vector<vector<int>> graph(N);
  vector<int> visited(N, INF);

  for (int i = 0; i < M; ++i) {
      int A, B;
      cin >> A >> B;
      graph[A - 1].push_back(B - 1);
      graph[B - 1].push_back(A - 1);
  }

  queue<int> q;
  q.push(0);
  visited[0] = 0;

  // BFS
  while (!q.empty()) {
      int u = q.front(); q.pop();
      for (int i = 0; i < int(graph[u].size()); ++i) {
          int g = graph[u][i];
          if (visited[g] != INF) {
              continue;
          }
          visited[g] = u + 1;
          q.push(g);
      }
  }

  string ans = "Yes";

  for (int i = 1; i < N; ++i) {
    if (visited[i] == INF) {
      ans = "No";
      break;
    }
  }

  cout << ans << endl;
  if (ans == "Yes") {
    for (int i = 1; i < N; ++i) {
      cout << visited[i] << endl;
    }
  }

  return 0;

}
