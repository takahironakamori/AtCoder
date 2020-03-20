### ABC107

# C - Candles

  [問題はこちら](https://atcoder.jp/contests/abc107/tasks/arc101_a)

## 発想

  K個連続選択する必要がある。<br>
  Nは10の5乗以下なので、0から初めてN - K + 1まで全部調べる。<br>
  K個を選択したときに、<br>
  最も右のものから最も左のものへ移動した場合 = 右の位置の絶対値 +（右の位置 - 左の位置）の絶対値<br>
  最も左のものから最も右のものへ移動した場合 = 左の位置の絶対値 +（左の位置 - 右の位置）の絶対値<br>
  の2パターンがあるので、それらの最小値を求める。

## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    long long INF = 1LL<<60;

    int N, K;
    cin >> N >> K;

    vector<int> x(N);
    for (int i = 0; i < N; i++) {
      cin >> x[i];
    }

    long long answer = INF;

    for (int i = 0; i < N - K + 1; i++) {
      // 右端
      long long right = x[i];
      // 左端
      long long left = x[i + K - 1];
      // 右から左
      answer = min(answer, abs(right) + abs(right - left));
      // 左から右
      answer = min(answer, abs(left) + abs(left - right));
    }

    cout << answer << endl;

    return 0;

  }
  ```
