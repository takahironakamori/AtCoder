### ABC153

# C - Fennec vs Monster

  [問題はこちら](https://atcoder.jp/contests/abc153/tasks/abc153_c)


- 発想<br>
  H_1 から H_N までを配列に入れ、大きい順に並び替える。<br>
  大きいものから K - 1 番目までは必殺技で倒すので無視。<br>
  大きいもの K から番目から最後までの体力の合計が必要な攻撃の回数の最小値となる。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, K;
    cin >> N >> K;

    vector<int> H(N);
    for (int i = 0; i < N; i++) {
      cin >> H[i];
    }

    sort(H.begin(), H.end(), std::greater<int>());

    long long answer = 0;

    for (int i = K; i < N; i++) {
      answer += H[i];
    }

    cout << answer << endl;

  }
  ```
