### ABC092

# C - Traveling Plan

  [問題はこちら](https://atcoder.jp/contests/abc092/tasks/arc093_a)


## 発想

  あらかじめN個全てのスポットを移動した場合の移動にかかる金額の総和を計算しておく。<br>
  訪れることを取りやめた観光スポットをi番目とすると、<br>
  i-1番目のスポット - i番目のスポット（絶対値）とi番目のスポット - i+1番目のスポット（絶対値）を総和から引き、<br>
  i-1番目のスポット + i+1番目のスポット（絶対値）を総和に加える。<br>
  最初と最後のスポットの場合は0が絡むので注意する。


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    vector<int> A(N);
    long long all = 0;
    long long current = 0;
    for (int i = 0; i < N; i++) {
      cin >> A[i];
      all += abs(current - A[i]);
      current = A[i];
    }

    all += abs(current - 0);
    current = 0;

    for (int i = 0; i < N; i++) {
      int answer = all;
      answer -= abs(current - A[i]);
      if (i != N - 1) {
        answer -= abs(A[i] - A[i+1]);
        answer += abs(current - A[i+1]);
      } else {
        answer -= abs(A[i] - 0);
        answer += abs(current - 0);
      }
      current = A[i];

      cout << answer << endl;
    }

    return 0;

  }
  ```
