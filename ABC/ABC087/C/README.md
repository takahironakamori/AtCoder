### ABC087

# C - Candies

  [問題はこちら](https://atcoder.jp/contests/abc087/tasks/arc090_a)


## 発想

  下に下がるタイミングはN回しかないので、0からN-1まで全部試して最大値を探す。


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    vector<int> A1(N);
    for (int i = 0; i < N; i++) {
      cin >> A1[i];
    }

    vector<int> A2(N);
    for (int i = 0; i < N; i++) {
      cin >> A2[i];
    }

    int answer = 0;

    for (int i = 0; i < N; i++) {
      int answer_ = 0;
      for (int j = 0; j < N; j++) {
        if (i == j) {
          answer_ += A1[j] + A2[j];
        } else if (i < j) {
          answer_ += A2[j];
        } else {
          answer_ += A1[j];
        }
      }
      answer = max(answer, answer_);
    }

    cout << answer << endl;

    return 0;

  }
  ```
