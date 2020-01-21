### Educational DP Contest / DP まとめコンテスト

# E - Knapsack 2

  [問題はこちら](https://atcoder.jp/contests/dp/tasks/dp_e)


- 発想<br>
  この問題では、i 番目までの品物で価値の総和 j 以下を満たす重さの総和の最小値を考える。<br>
  i 番目までの品物で価値の総和 j 以下を満たす重さの総和を考えた場合、解が存在しない場合がある。<br>
  解が存在しない場合がわかるように、存在しない場合はすごく大きな値(以下、INFという。)を入れておく。<br>
  解が 0 になる可能性はあるので、 0 は使えない。<br>
  <br>
  0 番目までの品物は何も選べないので、DPの配列の初期値は以下のようになる。<br>
  dp\[0]\[0] = 0<br>
  dp\[0]\[j] = INF<br>
  <br>
  i 番目までの品物で価値の総和 j となるように選ぶには、以下の二通りある。<br>
  ・i − 1 番目までの品物から価値の総和が j となるように選ぶ<br>
  ・i − 1 番目までの品物から価値の総和が j − v[i] となるように選び、 i 番目の品物を加える<br>
  <br>
  したがって漸化式が以下のようになる。<br>
  dp\[i + 1]\[j] = min(dp\[i]\[j],dp\[i]\[j − v\[i]]+w\[i])<br>
  <br>
  そして、求める答えは、<br>
  dp\[n]\[j] ≦ W となる最大の j となる。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int INF = 1000000000;

    int N, W;
    cin >> N >> W;

    vector<int> w(N + 1);
    vector<int> v(N + 1);
    int V = 0;
    for (int i = 0; i < N; i++) {
      cin >> w[i] >> v[i];
      V = max(V, v[i]);
    }

    vector<vector<int>> dp(N + 1, vector<int>(N * V + 1));

    for (int i = 0; i < N; i++) {
      fill(dp[i].begin(), dp[i].end(), INF);
    }

    dp[0][0] = 0;

    for (int i = 0; i < N; i++) {
      for (int j = 0; j <= N * V; j++) {
        if (j < v[i]) {
          dp[i + 1][j] = dp[i][j];
        } else {
          dp[i + 1][j] = min(dp[i][j], dp[i][j - v[i]] + w[i]);
        }
      }
    }

    int answer = 0;

    for (int i = 0; i <= N * V; i++) {
      if (dp[N][i] <= W) {
        answer = max(answer, i);
      }
    }

    cout << answer << endl;

  }
  ```
