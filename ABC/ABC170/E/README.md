### ABC170

# E - Smart Infants

  [問題はこちら](https://atcoder.jp/contests/abc170/tasks/abc170_e)


## 発想



## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;


int main() {

  int N, Q;
  cin >> N >> Q;

  vector<int> A(N);
  vector<int> B(N);

  vector<multiset<int>> yochien(200010);
  multiset<int> maxEnji;

  auto getMaxEnji = [&](int i) {
    if (yochien[i].size() == 0) {
      return -1;
    }
    return *yochien[i].rbegin();
  };

  auto addMaxEnji = [&](int i) {
    int maxRate = getMaxEnji(i);
    if (maxRate == -1) {
      return;
    }
    maxEnji.insert(maxRate);
  };

  auto delMaxEnji = [&](int i) {
    int maxRate = getMaxEnji(i);
    if (maxRate == -1) {
      return;
    }
    maxEnji.erase(maxEnji.find(maxRate));
  };

  auto addEnji = [&](int i, int rate) {
    delMaxEnji(i);
    yochien[i].insert(rate);
    addMaxEnji(i);
  };

  auto delEnji = [&](int i, int rate) {
    delMaxEnji(i);
    yochien[i].erase(yochien[i].find(rate));
    addMaxEnji(i);
  };

  for (int i = 0; i < N; ++i) {
    cin >> A[i] >> B[i];
    addEnji(B[i], A[i]);
  }

  for (int i = 0; i < Q; ++i) {
    int C, D;
    cin >> C >> D;
    --C;
    delEnji(B[C], A[C]);
    B[C] = D;
    addEnji(B[C], A[C]);
    int ans = *maxEnji.begin();
    printf("%d\n", ans);
  }
  
  return 0;

}
```
