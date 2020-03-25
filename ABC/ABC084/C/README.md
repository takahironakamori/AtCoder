### ABC084

# C - Special Trains

  [問題はこちら](https://atcoder.jp/contests/abc084/tasks/abc084_c)


## 発想

  駅に着いた時間がS<sub>i</sub>以下の場合は、S<sub>i</sub>まで待つ必要があるので、着いた時間をS<sub>i</sub>に上書きする。<br>
  駅に着いた時間がS<sub>i</sub>より遅いは、着いた時間をF<sub>i</sub>で割った余りをF<sub>i</sub>を引いた値を着いた時間を加える。<br>
  駅に着いた時間がS<sub>i</sub>より遅いは、着いた時間をF<sub>i</sub>で割った余りが0の場合は、着いた時間そのままで進める。<br>
  駅から駅へ移動するには、C<sub>i</sub>は必要。<br>


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    vector<int> C(N);
    vector<int> S(N);
    vector<int> F(N);
    for (int i = 0; i < N - 1; i++) {
      cin >> C[i] >> S[i] >> F[i];
    }

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
      int answer = 0;
      if (i != N - 1) {
        for (int j = i; j < N - 1; j++) {
          if (answer < S[j]) {
            answer = S[j];
          } else if (answer % F[j] != 0) {
            answer = answer + F[j] - answer % F[j];
          }
          answer += C[j];
        }

      }
      cout << answer << endl;
    }

    return 0;

  }
  ```
