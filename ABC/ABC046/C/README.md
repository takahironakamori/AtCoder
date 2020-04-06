### ABC046

# C - AtCoDeerくんと選挙速報

  [問題はこちら](https://atcoder.jp/contests/abc046/tasks/arc062_a)


## 発想

  A:Bの状態で、次にx:yを満たしたい場合は、nx:nyになるようなnを見つける必要がある。<br>
  ここのnは、max(A/x(切り上げ),B/y(切り上げ))で求めることができる。<br>
  long long型の割り算の切り上げ方法に注意する。<br>
  double long型を使ったり、あまりがある場合に、++する等。


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    vector<pair<int,int>> TA(N);
    for (int i = 0; i < N; i++) {
      cin >> TA[i].first >> TA[i].second;
    }

    long long t = TA[0].first;
    long long a = TA[0].second;

    for (int i = 1; i < N; i++) {
      long long n = max(ceil((double long) t / TA[i].first), ceil((double long) a / TA[i].second));
      t = n * TA[i].first;
      a = n * TA[i].second;
    }

    cout << t + a << endl;

    return 0;

  }
  ```
