### ABC048

# C - Boxes and Candies

  [問題はこちら](https://atcoder.jp/contests/abc048/tasks/arc064_a)


## 発想

  2個ずつ調べていく。x < a[i] + a[i+1] のときは、次に影響を与えるため、まずa[i+1]から減らす。<br>
  a[i+1]が0になっても x < a[i] のときは a[i] を減らす。<br>
  あらかじめ合計を計算しておいて、減らした後の合計を引いた値が回答となる。


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, x;
    cin >> N >> x;

    vector<int> a(N);
    long long sum = 0;

    for (int i = 0; i < N; i++) {
      cin >> a[i];
      sum += a[i];
    }

    for (int i = 0; i < N - 1; i++) {
      if (x < a[i] + a[i+1]) {
        int d1_ = a[i] + a[i+1] - x;
        if (d1_ <= a[i+1]) {
          a[i+1] -= d1_;
        } else {
          a[i+1] = 0;  
        };
      }
      if (x < a[i] + a[i+1]) {
        int d2_ = a[i] + a[i+1] - x;
        if (d2_ <= a[i]) {
          a[i] -= d2_;
        } else {
          a[i] = 0;  
        };
      }
    }

    long long result = 0;
    for (int i = 0; i < N; i++) {
      result += a[i];
    }

    cout << sum - result << endl;

    return 0;

  }
  ```
