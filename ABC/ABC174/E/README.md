### ABC177

# E - Logs

  [問題文はこちら](https://atcoder.jp/contests/abc174/tasks/abc174_e)


## 発想

　・
  


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int N, K;
  cin >> N >> K;

  vector<int> A(N);
  for (int i = 0; i < N; ++i) {
    cin >> A[i];
  }

  int ac = 1e9;
  int wa = 0;
  
  while (1 < ac - wa) {
    long long mid = (ac + wa) / 2;

    // f(x) := 一番長い丸太を x 以下にできるか
    //　　　  → 全ての丸太を x 以下にするために必要な丸太を切る回数 <= K か？ 
    auto f = [&](int x) {
      long long current = 0;
      for (int i = 0; i < N; ++i) {
        current += (A[i] - 1) / mid;
      }
      return current <= K;
    };
    
    if (f(mid)) {
      ac = mid;
    } else {
      wa = mid;
    }
  }
  
  cout << ac << endl;

  return 0;

}
```
