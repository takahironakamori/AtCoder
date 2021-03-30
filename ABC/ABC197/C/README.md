### ABC197

# C - ORXOR

  [問題文はこちら](https://atcoder.jp/contests/abc197/tasks/abc197_c)


## 発想

　・
  


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
  
  long long N;
  cin >> N;
  
  vector<long long> A(N);
  
  for (int i = 0; i < N; ++i) {
    cin >> A[i];
  }

  int ans = INT_MAX;
  
  if (N == 1) {
    ans = A[0];
  }
  
  for(int bits = 1; bits < (1 << N - 1); bits++) {

    vector<int> bit;

    for (int i = 0; i < N - 1; i++) {
      if (bits >> i & 1) {
        bit.push_back(i);
      }
    }

    vector<long long> OR;
    int result = 0;
    int current = 0;
    bool flg = true;

    for (int i = 0; i < N; ++i) {
      if (flg) {
        result = A[i];
        flg = false;
      } else {
        result = (result | A[i]);
      }
      if (current < bit.size()) {
        if (bit[current] == i) {
          OR.push_back(result);
          current++;
          flg = true;
        }
      }
    }
    OR.push_back(result);

    int XOR = INT_MAX;
    if (1 < OR.size()) {
      XOR = OR[0];
      for (int i = 1; i < int(OR.size()); ++i) {
        XOR = XOR ^ OR[i];
      }
    }
    
    ans = min(ans, XOR);

  }

  cout << ans << endl;

  return 0;

}
```
