### ABC098

# C - Attention

  [問題はこちら](https://atcoder.jp/contests/abc098/tasks/arc098_a)


## 発想

  W(またはE)の数を累積和で数える。<br>
  以下を0からNまで行い、変更する文字数を数える。<br>
  ・iより東にいて、東を向いている人は西を向く必要がある。<br>
  ・iより西にいて、西を向いている人は東を向く必要がある。<br>
  最小文字数が回答となる。


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    string S;
    cin >> S;

    // Wの数の累積和
    vector<int> W(N+1);

    for (int i = 0; i < N; i++) {
      if (S[i] == 'W') {
        if (i == 0) {
          W[i] = 1;
        } else {
          W[i] = 1 + W[i - 1];
        }
      } else {
        if (i == 0) {
          W[i] = 0;
        } else {
          W[i] = W[i - 1];
        }
      }
    }

    int answer = N;

    for (int i = 0; i < N; i++) {
      // iより東にいて、東を向いている人は西を向く必要がある
      int count_ = 0;
      if (i != 0) {
        count_ += W[i-1];
      }
      // iより西にいて、西を向いている人は東を向く必要がある
      if (i != N - 1){
        count_ += (N - i - 1) - (W[N-1] - W[i]);
      }
      answer = min(answer, count_);
    }

    cout << answer << endl;

    return 0;

  }
  ```
