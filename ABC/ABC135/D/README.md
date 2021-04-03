### ABC135

# D - Digits Parade

  [問題はこちら](https://atcoder.jp/contests/abc135/tasks/abc135_d)


## 発想


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  const int mod = 1000000007;

  int main() {
    
    string S;
    cin >> S;

    int N = 13;

    // dp[i]:= 13 で割ったあまりが i であるパターン数
    vector<long long> dp(N);
    dp[0] = 1;

    // 後ろから見ていく場合
    // ex: 1?2?3 0 -> 3 _> ?3 -> 2?3 -> ...
    int digit = 1;
    for (int i = int(S.size()) - 1; 0 <= i; --i) {

      vector<long long> nextDP(N);

      if (S[i] == '?') {
        for (int j = 0; j < 10; ++j) {
          for (int k = 0; k < N; ++k) {
            nextDP[(j * digit + k) % N] += dp[k];
            nextDP[(j * digit + k) % N] %= mod;
          }
        }
      } else {
        int j = (S[i] - '0');
        for (int k = 0; k < N; ++k) {
            nextDP[(j * digit + k) % N] += dp[k];
            nextDP[(j * digit + k) % N] %= mod;
          }
      }

      digit *= 10; 
      digit %= N;
      dp = nextDP;

    }

    cout << dp[5] << endl;
    
    return 0;

  }
  ```
