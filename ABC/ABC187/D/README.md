### ABC188

# D - Choose Me

  [問題文はこちら](https://atcoder.jp/contests/abc187/tasks/abc187_d)


## 発想

　・
  


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;


int main() {

  int N;
  cin >> N;

  vector<long long> sum(N);
  long long sumA = 0;

  for (int i = 0; i < N; ++i) {
    long long A, B;
    cin >> A >> B;
    sum[i] = 2 * A + B;
    sumA += A;
  }

  sort(sum.rbegin(), sum.rend());

  int ans = 0;

  for (int i = 0; i < N; ++i) {
    sumA -= sum[i];
    if (sumA < 0) {
      ans = i + 1;
      break;
    }
  }

  cout << ans << endl;
  return 0;

}
```
