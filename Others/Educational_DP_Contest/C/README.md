### Educational DP Contest / DP まとめコンテスト

# C - Vacation

  [問題はこちら](https://atcoder.jp/contests/dp/tasks/dp_c)


- 発想<br>
  dp 用の二次元配列を作る。<br>
  dp\[i]\[0] は i のときに a を選んだ時の幸福度の最大値を入れる<br>
  dp\[i]\[1] は i のときに b を選んだ時の幸福度の最大値を入れる<br>
  dp\[i]\[2] は i のときに c を選んだ時の幸福度の最大値を入れる<br>
  dp\[i]\[0] のときは、max(dp\[i-1]\[1], dp\[i-2]\[2]) + a\[i]<br>
  dp\[i]\[1] のときは、max(dp\[i-1]\[0], dp\[i-2]\[2]) + b\[i]<br>
  dp\[i]\[2] のときは、max(dp\[i-1]\[0], dp\[i-2]\[1]) + c\[i]<br>
  を 1 から N まで繰り返す。<br>
  N 番目の最大値は max(dp\[N]\[0], max(dp\[N]\[1], dp\[N]\[2])) となる。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    vector<int> a(N+1);
    vector<int> b(N+1);
    vector<int> c(N+1);

    for (int i = 1; i <= N; i++) {
      cin >> a[i] >> b[i] >> c[i];
    }

    int answer = 0;

    // dp[i][0]:a dp[i][1]:b dp[i][2]:c
    vector<vector<int>> dp(N+1,vector<int>(3));

    for (int i = 1; i <= N; i++) {
        dp[i][0] = max(dp[i - 1][1], dp[i - 1][2]) + a[i];
        dp[i][1] = max(dp[i - 1][0], dp[i - 1][2]) + b[i];
        dp[i][2] = max(dp[i - 1][0], dp[i - 1][1]) + c[i];
    }

    cout << max(dp[N][0], max(dp[N][1], dp[N][2])) << endl;

  }
  ```
    