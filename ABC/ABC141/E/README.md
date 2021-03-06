### ABC141

# E - Who Says a Pun?

  [問題はこちら](https://atcoder.jp/contests/abc141/tasks/abc141_e)

## 発想

  A<sub>i</sub>から最も大きいものに割引券を使うのが最も有利である。<br>
  ただし、1回使うごとにA<sub>i</sub>から最も大きいものを探して割引する必要がある。<br>
  priority_queueを使う。
  

## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;


  int main() {
    
    int N;
    cin >> N;

    string S;
    cin >> S;

    // dp[i][j]: i と j から始めたときに一致する最大の長さ
    vector<vector<int>> dp(N + 10, vector<int>(N + 10));

    for (int i = S.size() - 1; 0 <= i; --i) {
      for (int j = S.size() - 1; 0 <= j; --j) {
        if (S[i] != S[j]) {
          dp[i][j] = 0;
        } else {
          dp[i][j] = dp[i + 1][j + 1] + 1;
        }
      }
    }

    int ans = 0;
    for (int i = 0; i < N; ++i) {
      for (int j = 0; j < N; ++j) {
        if (j <= i) {
          continue;
        }
        int current = min(dp[i][j], j - i);
        ans = max(ans, current);
      }
    }

    cout << ans << endl;
    return 0;

  }
  ```
