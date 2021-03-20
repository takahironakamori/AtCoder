### ABC190

# D - Staircase Sequences

  [問題文はこちら](https://atcoder.jp/contests/abc190/tasks/abc190_d)


## 発想

　・
  


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

long long N;

vector<long long> divisor(long long n) {
  vector<long long> res;
  for (long long i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      res.push_back(i);
      if (i != n / i) {
        res.push_back(n / i);
      }
    }
  }
  return res;
}

bool check(long long l) {
  long long v = 2 * N / l - l + 1;
  if (abs(v) % 2 == 0) {
    return true;
  } else {
    return false;
  }
}

int main() {

  cin >> N;

  int ans = 0;
  vector<long long> L = divisor(N);

  for (long long i = 0; i < int(L.size()); ++i) {
    if (check(L[i])) {
      ans++;
    }
    long long l2 = N * 2 / L[i];
    if (i != l2) {
      if (check(l2)) {
        ans++;
      }
    }
  }

  cout << ans << endl;

  return 0;

}
```
