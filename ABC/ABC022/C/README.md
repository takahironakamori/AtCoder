### ABC022

# C - Blue Bird

  [問題はこちら](https://atcoder.jp/contests/abc022/tasks/abc022_c)


## 発想

  「頂点1に隣接する辺を除いたグラフ」の全点対の最短経路をあらかじめ計算しておく。<br>
  頂点1に隣接する頂点のうちどの2つを閉路に含めるか全通り試す。<br>
  前計算した最短経路の結果と合わせて最短経路の長さを求める。


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, M;
    cin >> N >> M;

    vector<vector<long long>> dp(N, vector<long long>(N));
    vector<vector<long long>> start(N, vector<long long>(N));

    for (int i = 0; i < M; i++) {
      int u, v;
      long long l;
      cin >> u >> v >> l;
      u--;
      v--;
      dp[u][v] = l;
      dp[v][u] = l;
      start[u][v] = l;
      start[v][u] = l;
    }

    // 経路がない箇所には適当に大きな数をいれておく
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        if (i != j && dp[i][j] == 0) {
          dp[i][j] = 1000000000;
          start[i][j] = 1000000000;
        }
      }
    }

    // スタート位置に繋がっている経路をなくす（適当に大きな数をいれておく）
    for (int i = 0; i < N; i++) {
      dp[0][i] = 1000000000;
      dp[i][0] = 1000000000;
    }

    // ワーシャルフロイドで全てのノード間の最短経路を求める
    for (int k = 0; k < N; k++) {
      for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
          dp[i][j] = min(dp[i][j],dp[i][k] + dp[k][j]);
        }
      }
    }

    long long answer = 1LL<<60;

    // スタート地点と最短経路を繋いだ最短を探す
    for (int i = 1; i < N; i++) {
      for (int j = 1; j < N; j++) {
        if (i != j) {
          answer = min(answer, start[0][i] + start[j][0] + dp[i][j]);
        }
      }
    }

    if (1000000000 < answer) {
      cout << -1 << endl;
    } else {
      cout << answer << endl;
    }

    return 0;

  }
  ```
