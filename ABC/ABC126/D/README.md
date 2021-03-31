### ABC126

# D - Even Relation

  [問題はこちら](https://atcoder.jp/contests/abc126/tasks/abc126_d)

- 発想<br>
  ・次の点までの距離が偶数の場合は、同じ色<br>
  ・次の点までの距離が奇数の場合は、違う色<br>
  ・dfs等で調べる。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int N;

  vector<set<pair<int, int>>> edge;
  vector<int> ans;

  void dfs(int now, int prev, int color) {
    
    ans[now] = color;

    for (auto item: edge[now]) {
      if (item.first != prev) {
        if (item.second % 2 == 1) {
          dfs(item.first, now, !color);
        } else {
          dfs(item.first, now, color);
        }
      }
    }

  }

  int main() {

    cin >> N;
    edge.resize(N);
    ans.resize(N);

    // 入力を受け取る
    for (int i = 0; i < N - 1; ++i) {
      int u, v, w;
      cin >> u >> v >> w;
      u--;
      v--;
      edge[u].insert(make_pair(v, w));
      edge[v].insert(make_pair(u, w));
    }

    dfs(1, -1, 0);
    
    for (int i = 0; i < N; ++i) {
      cout << ans[i] << endl;
    }

    return 0;

  }
  ```
