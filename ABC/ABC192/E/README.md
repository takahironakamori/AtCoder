### ABC192

# E - Train

  [問題文はこちら](https://atcoder.jp/contests/abc192/tasks/abc192_e)


## 発想

　・
  


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

struct Edge {
  int to, T, K;
};

int N, M, X, Y;

vector<vector<Edge>> graph;
vector<long long> dist;
priority_queue<pair<long long,int>, vector<pair<long long,int>>, greater<pair<long long,int>>> pq;

long long INF = 1e18;

void pqPush(int v, long long current) {
  if (dist[v] <= current) {
    return;
  }
  dist[v] = current;
  pq.emplace(make_pair(current, v));
  return;
}

void dijkstra() {

  while (!pq.empty()) {

    pair<long long, int> p = pq.top(); pq.pop();
    long long x = p.first;
    int v = p.second;

    if (dist[v] != x) {
      continue;
    }

    for (int i = 0; i < int(graph[v].size()); i++) {
      Edge e = graph[v][i];
      long long current =(long long) (x + e.K - 1) / e.K * e.K + e.T;
      pqPush(e.to, current);
    }
  }

  return;
}


int main() {

  cin >> N >> M >> X >> Y;

  X--;
  Y--;
  
  graph.resize(N);
  dist.resize(N);
  fill(dist.begin(), dist.end(), INF);

  for (int i = 0; i < M; ++i) {
    int A, B, T, K;
    cin >> A >> B >> T >> K;
    A--;
    B--;

    Edge a;
    a.to = B;
    a.T = T;
    a.K = K;

    Edge b;
    b.to = A;
    b.T = T;
    b.K = K;

    graph[A].emplace_back(a);
    graph[B].emplace_back(b);
  }

  pqPush(X, 0);
  dijkstra();

  long long ans = dist[Y];
  if (ans == INF) {
    ans = -1;
  }
  cout << ans << endl;

  return 0;

}
```
