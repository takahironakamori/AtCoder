### ABC129

# E - Sum Equals Xor

  [問題はこちら](https://atcoder.jp/contests/abc129/tasks/abc129_e)

## 発想


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  // mod の処理をよしなにしてくれるライブラリ
  const int mod = 1000000007;

  /*
    a + b = (a xor b) + (A & B) * 2
    a + b = (a xor b) を満たすには、
    (A & B) * 2 が 0 となる

    dp[i][j]
      i : i 桁目まで調べた
      j : 0 -> i 桁が一致
          1 ->「以下」であることがすでに確定
  */
  vector<vector<int>> dp(100010,vector<int>(2));

  int main() {

    string L;
    cin >> L;

    int n = L.size();

    dp[0][0] = 1;
    
    for (int i = 0; i < n; ++i) {
      if (L[i] == '0') {
        dp[i+1][0] = dp[i][0];
        dp[i+1][1] = dp[i][1];
      } else {
        dp[i+1][1] = (dp[i][0] + dp[i][1]) % mod;
      }

      if (L[i] == '0') {
        (dp[i+1][1] += dp[i][1] * 2 % mod) %= mod;
      } else {
        (dp[i+1][0] += dp[i][0] * 2 % mod) %= mod;
        (dp[i+1][1] += dp[i][1] * 2 % mod) %= mod;
      }
    }

    int ans = (dp[n][0] + dp[n][1]) % mod;
    cout << ans << endl;
    return 0;

  }
  ```
