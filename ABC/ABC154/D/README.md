### ABC154

# D - Dice in Line

  [問題はこちら](https://atcoder.jp/contests/abc154/tasks/abc154_d)


- 発想<br>

  期待値は、1 から n までの合計を n で割った数で計算できる。<br>
  計算した期待値を配列にし、さらにそれらの累積和を計算する。<br>
  累積和の配列[i] - 累積和の配列[i - K] で、それぞれの位置の K 個の期待値の合計を計算することができる。<br>


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  double f(int n) {
    double res = 0;
    double n_ = n * (n + 1) / 2;
    res = n_ / n;
    return res;
  }

  int main() {

    int N, K;
    cin >> N >> K;

    vector<int> p(N);
    vector<double> k(N);
    vector<double> sum(N);
    double all = 0;

    for (int i = 0; i < N; i++) {
      cin >> p[i];
      k[i] = f(p[i]);
      if (i == 0) {
        sum[i] = k[i];
      } else {
        sum[i] = k[i] + sum[i-1];
      }
    }

    double answer = sum[K - 1];

    for (int i = K; i < N; i++) {
      answer = max(answer, sum[i] - sum[i - K]);
    }

    cout << setprecision(11) << answer << endl;

    return 0;

  }
  ```
