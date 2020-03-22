### ABC094

# C - Many Medians

  [問題はこちら](https://atcoder.jp/contests/abc094/tasks/arc095_a)


## 発想

  N個から1個取り除くので、N - 1個の中のN / 2番目を探せばいい。<br>
  X[i]がNの中央値以下であればN / 2 + 1番目、<br>
  X[i]がNの中央値を超える場合はN / 2番目が回答となる。


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    vector<int> X(N);
    vector<int> X2(N);
    for (int i = 0; i < N; i++) {
      cin >> X[i];
    }

    X2 = X;

    sort(X.begin(), X.end());

    // 中央値
    int center = X[N / 2 - 1];

    int answer1 = X[N / 2];
    int answer2 = center;

    for (int i = 0; i < N; i++) {
      if (X2[i] <= center) {
        // 中央値以下場合は中央値より1つ大きいものが回答
        cout << answer1 << endl;
      } else {
        // 中央値を超える場合は中央値が回答
        cout << answer2 << endl;
      }
    }

    return 0;

  }
  ```
