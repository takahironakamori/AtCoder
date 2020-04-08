### ABC021

# C - 正直者の高橋くん

  [問題はこちら](https://atcoder.jp/contests/abc021/tasks/abc021_c)


## 発想

  頂点aから全ての頂点への最短経路DAGを構築する。<br>
  ワーシャルフロイド法などを行ってから、条件を満たす辺のみグラフを構築する。<br>
  各ステップ時にどの町にいるかをマップにする。<br>
  マップされた数値から最短経路の個数の数を数える。


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, a, b, M;
    cin >> N >> a >> b >> M;

    a--;
    b--;

    vector<int> x(M);
    vector<int> y(M);

    vector<vector<int>> dp(N,vector<int>(N));

    for (int i = 0; i < M; i++) {
      int x_, y_;
      cin >> x_ >> y_;
      x[i] = x_ - 1;
      y[i] = y_ - 1;
      dp[x[i]][y[i]] = 1;
      dp[y[i]][x[i]] = 1;
    }

    // 経路がない箇所に適当に大きな数を入れておく
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        if (i != j && dp[i][j] == 0) {
          dp[i][j] = 10000;
        }
      }
    }

    // ワーシャルフロイドで全てのノード間の最短経路を求める
    for (int k = 0; k < N; k++) {
      for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
          dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
        }
      }
    }

    // 最短路DAG
    vector<vector<int>> dag(N, vector<int>(N));
    for (int i = 0; i < M; i++) {
      if (dp[a][x[i]] == dp[a][y[i]] + 1) {
        dag[y[i]][x[i]] = 1;
      }
      if (dp[a][x[i]] == dp[a][y[i]] - 1) {
        dag[x[i]][y[i]] = 1;
      }
    }

    // 各ステップ時にどの町にいるかをマップにする
    map<int,vector<int>> mp;
    for (int i = 0; i < N; i++) {
      int d = dp[a][i];
      mp[d].push_back(i);
    }

    // マップされた数値から最短経路の個数の数を数える
    int mod = 1000000000 + 7;
    vector<long long> minStep(N);
    minStep[a] = 1;

    for (int i = 0; i < dp[a][b]; i++) {
      vector<int> list = mp[i];
      for (int j = 0; j < list.size(); j++) {
        int town = list[j];
        for (int k = 0; k < N; k++) {
          if (dag[town][k] == 1) {
            minStep[k] = (minStep[k] + minStep[town]) % mod;
          }
        }
      }
    }

    cout << minStep[b] << endl;

    return 0;

  }
  ```
