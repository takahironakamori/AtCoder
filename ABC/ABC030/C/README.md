### ABC030

# C - 飛行機乗り

  [問題はこちら](https://atcoder.jp/contests/abc030/tasks/abc030_c)


## 発想

  乗ることができる飛行機を二分探索で探す。<br>
  

## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;


  int main() {

    int N, M, X, Y;
    cin >> N >> M >> X >> Y;

    vector<int> a(N);
    for (int i = 0; i < N; i++) {
      cin >> a[i];
    }

    vector<int> b(M);
    for (int i = 0; i < M; i++) {
      cin >> b[i];
    }

    int answer = 0;

    bool flg = true;

    int current = 0;

    int indexA = 0;
    int indexB = 0;

    while(flg) {

      current = a[indexA] + X;
      indexB = lower_bound(b.begin(), b.end(), current) - b.begin();

      if (M <= indexB) {
        flg = false;
        break;
      }

      current = b[indexB] + Y;
      indexA = lower_bound(a.begin(), a.end(), current) - a.begin();

      answer++;

      if (N <= indexA) {
        flg = false;
        break;
      }

    }

    cout << answer << endl;

    return 0;

  }
  ```
