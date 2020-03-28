### ABC080

# C - Shopping Street

  [問題はこちら](https://atcoder.jp/contests/abc080/tasks/abc080_c)


## 発想

  月曜日午前、月曜日午後、火曜日午前、火曜日午後と10個の要素として考える。<br>
  10個の要素について「営業する」を1、「営業しない」を0とすると、2の10乗パターン（すべて0は対象外）なので全パターン試すことができる。<br>
  

## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  long long INF = 1LL<<60;

  int F[110][11];
  long long P[110][11];

  int main() {

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
      for (int j = 0; j < 10; j++) {
        cin >> F[i][j];
      }
    }

    for (int i = 0; i < N; i++) {
      for (int j = 0; j < 11; j++) {
        cin >> P[i][j];
      }
    }

    long long answer = 0 - INF;

    for(int bits = 1; bits < (1 << 10); bits++) {

      long long answer_ = 0;

      for (int i = 0; i < N; i++) {
        int count_ = 0;
        for (int j = 0; j < 10; j++) {
          if (bits >> j & 1) {
            if (F[i][j] == 1) {
              count_++;
            }
          }
        }
        answer_ += P[i][count_];
      }

      answer = max(answer, answer_);

    }

    cout << answer << endl;

    return 0;

  }
  ```
