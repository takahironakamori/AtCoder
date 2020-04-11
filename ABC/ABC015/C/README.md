### ABC015

# C - 高橋くんのバグ探し

  [問題はこちら](https://atcoder.jp/contests/abc015/tasks/abc015_3)


## 発想

  質問の数、選択肢の数の両方の上限が5なので、全探索できる。<br>
  dfsなどを使って全探索する。<br>


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int N, K;
  int T[5][5];

  bool dfs (int num, int result) {

    if (num == N) {
      if (result == 0) {
        return true;
      } else {
        return false;
      }
    }

    for (int i = 0; i < K; i++) {
      if (dfs(num + 1, result ^ T[num][i])) {
        return true;
      }
    }

    return false;
  }

  int main() {

    cin >> N >> K;

    for (int i = 0; i < N; i++) {
      for (int j = 0; j < K; j++) {
        cin >> T[i][j];
      }
    }

    if (dfs(0,0)) {
      cout << "Found" << endl;
    } else {
      cout << "Nothing" << endl;
    }

    return 0;

  }
  ```
