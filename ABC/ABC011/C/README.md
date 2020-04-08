### ABC011

# C - 123引き算

  [問題はこちら](https://atcoder.jp/contests/abc011/tasks/abc011_3)

## 発想

  Nにたどり着くために何手必要かを保持するものでDPする。<br>
  後ろからする方がやりやすい。


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    int ng1, ng2, ng3;
    cin >> ng1 >> ng2 >> ng3;

    vector<int> NG(301);
    NG[ng1]++;
    NG[ng2]++;
    NG[ng3]++;

    // Nにたどり着くために何手必要かを保持
    vector<int> dp(N + 10, 1000000);

    if (NG[N] != 1) {
      dp[N] = 0;
    }

    for (int i = N - 1; 0 <= i; i--) {
      if (NG[i] == 1) {
        continue;
      }
      dp[i] = min(dp[i + 3] + 1, min(dp[i + 2] + 1, dp[i + 1] + 1));
    }

    if (dp[0] <= 100) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }

    return 0;

  }
  ```
