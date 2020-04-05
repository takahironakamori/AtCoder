### ABC060

# C - Sentou

  [問題はこちら](https://atcoder.jp/contests/abc060/tasks/arc073_a)


## 発想

  答えの変数を用意する。<br>
  スイッチを押す間隔がT秒より小さい場合は、その間隔を答えに加える。<br>
  スイッチを押す間隔がT秒以上場合は、Tを答えに加える。<br>
  


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    long long N, T;
    cin >> N >> T;

    vector<long long> t(N);
    for (int i = 0; i < N; i++) {
      cin >> t[i];
    }

    long long answer = T;

    for (int i = 1; i < N; i++) {
      if (t[i] - t[i-1] < T) {
        answer += t[i] - t[i-1];
      } else {
        answer += T;
      }
    }

    cout << answer << endl;

    return 0;

  }
  ```
