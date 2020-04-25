### ABC149

# D - Prediction and Restriction

  [問題はこちら](https://atcoder.jp/contests/abc149/tasks/abc149_d)


## 発想

  「K個前のじゃんけんで出したと同じ手を出すことができない」という条件を無視して、<br>
  すべて買ったという前提で得点を計算する。<br>
  次に、「K個前のじゃんけんで出したと同じ手を出すことができない」の条件を反映させるが、<br>
  K個ごとにじゃんけんの手が同じ場合は、その手で勝ったときの得点を引き、じゃんけんの手を無関係の文字列に変える。


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, K, R, S, P;
    cin >> N >> K >> R >> S >> P;

    string T;
    cin >> T;

    int answer = 0;

    for (int i = 0; i < N; i++) {
      if (T[i] == 'r') {
        answer += P;
      } else if (T[i] == 's') {
        answer += R;
      } else {
        answer += S;
      }
    }

    for (int i = 0; i < N; i++) {
      if (K <= i) {
        if (T[i - K] == T[i]) {
          if (T[i] == 'r') {
            answer -= P;  
          } else if (T[i] == 's') {
            answer -= R;
          } else {
            answer -= S;
          }
          T[i] = 'z';
        }
      }
    }

    cout << answer << endl;

  }
  ```
