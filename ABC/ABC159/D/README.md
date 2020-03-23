### ABC159

# D - Banned K

  [問題はこちら](https://atcoder.jp/contests/abc159/tasks/abc159_d)


## 発想

  あらかじめ2個を何通り作れるかを全部計算しておく。
  その合計から、ボールに書かれている整数の個数 - 1を引く。
  ボールに書かれている整数の個数が1の場合は引かない。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  // 2個を何通り作れるか
  map<int, long long> count;
  map<int, long long> count2;
  for (int i = 0; i < N; i++) {
    count2[A[i]]++;
    if (2 <= count2[A[i]]) {
      count[A[i]] = count2[A[i]] * (count2[A[i]] - 1) / 2;
    }
  }

  // 2個を何通り作れるかの合計
  long long counts = 0;
  for (auto item:count) {
    counts += item.second;
  }

  for (int i = 0; i < N; i++) {

    if (count2[A[i]] == 1) {
      cout << counts << endl;
    } else {
      long long c_ = counts;
      cout << counts - (count2[A[i]] - 1) << endl;
    }

  }

  return 0;

}
```
