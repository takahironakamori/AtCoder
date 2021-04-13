### ABC198

# E - Unique Color

  [問題文はこちら](https://atcoder.jp/contests/abc198/tasks/abc198_e)


## 発想

　・
  


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;


int N;
vector<vector<int>> graph;
vector<bool> check;
vector<int> C;
vector<int> visited;
vector<int> color;

void dfs(int i) {

  visited[i] = 1;

  color[C[i]] += 1;

  if (1 < color[C[i]]) { 
    check[i] = true;
  }

  for (int j = 0; j < int(graph[i].size()); ++j) {

    int next = graph[i][j];

    if (visited[next] == 0) {
      dfs(next);
    }

  }
  
  color[C[i]] -= 1;
  visited[i] = 2;

}


int main() {

  cin >> N;

  graph.resize(N);
  check.resize(N);
  C.resize(N);
  visited.resize(N);
  
  int mx = 0;
  for (int i = 0; i < N; ++i) {
    cin >> C[i];
    mx = max(mx, C[i]);
  }

  color.resize(mx + 1);

  for (int i = 0; i < N - 1; ++i) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    graph[a].push_back(b);
    graph[b].push_back(a);
  }

  dfs(0);

  for (int i = 0; i < N; ++i) {
    if (!check[i]) {
      cout << i + 1 << endl;
    }
  }

  return 0;

}
```
