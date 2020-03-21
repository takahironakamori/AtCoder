### ABC099

# C - Strange Bank

  [問題はこちら](https://atcoder.jp/contests/abc099/tasks/abc099_c)


## 発想

  dp[引き出す金額]とする。<br>
  dp[i]には、以下の最小値が入れる。<br>
  ・dp[i - 1] + 1<br>
  ・dp[i - 6<sup>x</sup>] + 1<br>
  ・dp[i - 9<sup>x</sup>] + 1<br>
  6<sup>x</sup>や9<sup>x</sup>はiを超えるまでループさせる。


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    int answer = 0;

    vector<int> dp(100010);

    dp[0] = 0;

    for (int i = 1; i <= 100000; i++){
      dp[i] = 100010;
      int cost = 1;
      while (cost <= i) {
        dp[i] = min(dp[i], dp[i - cost] + 1);
        cost *= 6;
      }
      cost = 9;
      while (cost <= i) {
        dp[i] = min(dp[i], dp[i - cost] + 1);
        cost *= 9;
      }
    }

    cout << dp[N] << endl;

    return 0;

  }
  ```    
