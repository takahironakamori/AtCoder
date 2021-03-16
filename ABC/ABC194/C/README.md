### ABC194

# C - Squared Error

  [問題文はこちら](https://atcoder.jp/contests/abc194/tasks/abc194_c)


## 発想

　・
  


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;


int main() {

  int N;
  cin >> N;

  vector<int> A(N);
  for (int i = 0; i < N; ++i) {
    cin >> A[i];
  }
  
  // 添字に − は使えないから 200 底上げする
  vector<int> current(401);
  
  long long ans = 0;

  for (int i = 0; i < N; ++i) {
    for (int j = -200; j <= 200; ++j) {
      long long c = current[j + 200];
      long long d = A[i] - j;
      ans += d * d * c;
    }
    current[A[i] + 200]++;
  }
  
  cout << ans << endl;

  return 0;

}
```
