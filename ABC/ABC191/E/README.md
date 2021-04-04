### ABC191

# E - Come Back Quickly

  [問題文はこちら](https://atcoder.jp/contests/abc191/tasks/abc191_e)


## 発想

　・
  


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

struct Edge {
  int to, cost;
};

int N, M;

vector<vector<Edge>> graph;
vector<int> dist;
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

const int INF = 1000000007;

void pqPush(int v, int c) {
  if (dist[v] <= c) {
    return;
  }
  dist[v] = c;
  pq.emplace(make_pair(c, v));
  return;
}

void dijkstra() {

  while (!pq.empty()) {

    pair<int, int> p = pq.top(); pq.pop();
    int c = p.first;
    int v = p.second;

    if (dist[v] != c) {
      continue;
    }

    for (int i = 0; i < int(graph[v].size()); ++i) {
      Edge e = graph[v][i];
      pqPush(e.to, c + e.cost);
    }
  }

  return;
}


int main() {

  cin >> N >> M;
  
  graph.resize(N);
  dist.resize(N);
  
  for (int i = 0; i < M; ++i) {
    int A, B, C;
    cin >> A >> B >> C;
    A--;
    B--;

    Edge a;
    a.to = B;
    a.cost = C;

    graph[A].emplace_back(a);
  }

  for (int i = 0; i < N; ++i) {
    fill(dist.begin(), dist.end(), INF);
    pq.empty();
    for (int j = 0; j < int(graph[i].size()); ++j) {
      pqPush(graph[i][j].to, graph[i][j].cost);
    }
    dijkstra();
    int ans = dist[i];
    if (ans == INF) {
      ans = -1;
    }
    cout << ans << endl;
  }

  return 0;

}
```
