### ABC146

# D - Coloring Edges on Tree

  [問題はこちら](https://atcoder.jp/contests/abc146/tasks/abc146_d)


## 発想

  色数は最大次数。<br>
  根に繋がっている線を別の色で塗る。<br>
  BFSとか使って、色をつけた先の頂点に移動し、その頂点に繋がっている線を別の色を塗る。<br>
  その時、親に繋がっている線だけ色が決まっている（1本しか決まっていない）ので、矛盾しないように色を指定することができる。


## コード1（C++）DFSで実装した場合

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  // to:どこの頂点に向かっているのか
  // id:色の番号
  struct Edge {
    int to, id;
  };

  vector<vector<Edge>> graph;
  vector<int> answer;

  // v:頂点の番号、c:1つ上の親の色、p:1つ前に見ていた親の番号
  void dfs (int v, int c = -1, int p = -1) {

    // 色を1から考える
    int k = 1;

    for (int i = 0; i < graph[v].size(); i++) {

      int u = graph[v][i].to;
      int ei = graph[v][i].id;

      // 調査済みの頂点の場合は次の辺を見る
      if (u == p) {
        continue;
      }

      // 親へ繋がっている線の色と同じ場合は色を変える
      if (k == c) {
        ++k;
      }

      // 色決定
      answer[ei] = k;

      // 色を変える
      ++k;

      // 再帰でチェック
      dfs(u, answer[ei], v);

    }
  }

  int main() {

    int N;
    cin >> N;

    graph.resize(N);
    answer.resize(N-1);

    for (int i = 0; i < N - 1; ++i) {
      int a, b;
      cin >> a >> b;
      // 配列では0から数えるため-1する
      --a;
      --b;
      graph[a].push_back(Edge{b,i});
      graph[b].push_back(Edge{a,i});

    }

    // 探索
    dfs(0);

    // 色数＝最大次数を探して、出力
    int mx = 0;
    for (int i = 0; i < N; i++) {
      mx = max(mx, int(graph[i].size()));
    }
    cout << mx << endl;

    // 塗り分け例を出力
    for (int i = 0; i < N - 1; i++) {
      cout << answer[i] << endl;
    }

    return 0;

  }
  ```

## コード2（C++）BFSで実装した場合

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  // to:どこの頂点に向かっているのか
  // id:色の番号
  struct Edge {
    int to, id;
  };

  int main() {

    int N;
    cin >> N;

    vector<vector<Edge>> graph(N);
    vector<int> answer(N - 1);

    for(int i = 0; i < N - 1; i++) {
      int a, b;
      cin >> a >> b;
      // 配列では0から数えるため-1する
      --a;
      --b;
      graph[a].push_back(Edge{b,i});
      graph[b].push_back(Edge{a,i});

    }

    // 探索用
    queue<int> q;

    // 頂点に色がついたか否か
    vector<int> used(N);

    // 初期設定
    q.push(0);
    used[0] = 1;

    // 探索
    while (!q.empty()) {

      int v = q.front();
      q.pop();

      // 色
      int c = -1;

      // qと繋がっている親を探して、親に繋がっている色を取得する
      for (int i = 0; i < graph[v].size(); i++) {

        int u = graph[v][i].to;
        int ei = graph[v][i].id;

        // used[u]に値が入っている頂点は唯一色が決まっている親となる
        if (used[u]) {
          c = answer[ei];
        }

      }

      // 色を1から考える
      int k = 1;

      // 色が決まっていない辺について色を決めていく
      for (int i = 0; i < graph[v].size(); i++) {

        int u = graph[v][i].to;
        int ei = graph[v][i].id;

        // すでに繋がっている場合は次の辺を見る
        if (used[u]) {
          continue;
        }

        // 親へ繋がっている線の色と同じ場合は色を変える
        if (k == c) {
          ++k;
        }

        // 色決定
        answer[ei] = k;

        // 色を変える
        ++k;

        // 次の頂点を調べる
        q.push(u);

        // 調査終わり
        used[u] = 1;

      }
    }

    // 色数＝最大次数を探して、出力
    int mx = 0;
    for (int i = 0; i < N; i++) {
      mx = max(mx, int(graph[i].size()));
    }
    cout << mx << endl;

    // 塗り分け例を出力
    for (int i = 0; i < N - 1; i++) {
      cout << answer[i] << endl;
    }

    return 0;

  }
  ```
