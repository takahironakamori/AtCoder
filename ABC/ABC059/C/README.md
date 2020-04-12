### ABC059

# C - Sequence

  [問題はこちら](https://atcoder.jp/contests/abc059/tasks/arc072_a)


## 発想

  ＋ ー ＋ ー ＋ ... と並ぶケースと、<br>
  ー ＋ ー ＋ ー ... と並ぶケースの2ケースが考えられるので両方を試す。<br>
  i桁目の和の符号と仮定した符号が同じであれば、その数を変更する必要はない。<br>
  i桁目の和の符号と仮定した符号が異なる場合は、1か-1まで修正する必要がある。


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    // +-+-+...の場合
    long long sum1 = 0;
    long long count1 = 0;

    for (int i = 0; i < n; i++) {
      sum1 += a[i];
      if (i % 2 == 0) {
        if (sum1 <= 0) {
          count1 += (1 - sum1);
          sum1 = 1;
        }
      } else {
        if (0 <= sum1) {
          count1 += (sum1 + 1);
          sum1 = -1;
        }
      }
    }

    // -+-+-...の場合
    long long sum2 = 0;
    long long count2 = 0;

    for (int i = 0; i < n; i++) {
      sum2 += a[i];
      if (i % 2 == 0) {
        if (0 <= sum2) {
          count2 += (sum2 + 1);
          sum2 = -1;
        }
      } else {
        if (sum2 <= 0) {
          count2 += (1 - sum2);
          sum2 = 1;
        }
      }
    }

    cout << min(count1, count2) << endl;

    return 0;

  }
  ```
