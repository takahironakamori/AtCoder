### ARC114

# A - Not coprime

[問題はこちら](https://atcoder.jp/contests/arc114/tasks/arc114_a)


## 発想

  


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
  if (b == 0) {
    return a;
  }
  return gcd(b, a % b);
}

int main() {

  int N;
  cin >> N;

  vector<long long>X(N);

  for (int i = 0; i < N; ++i) {
    cin >> X[i];
  }

  vector<int>p = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};

  long long ans = LONG_MAX;

  for(int bits = 1; bits < (1 << 15); bits++) {

    vector<int> bit;

    for (int i = 0; i < 15; i++) {
      if (bits >> i & 1) {
        bit.push_back(i);
      }
    }

    long long v = 1;

    for (int i = 0; i < int(bit.size()); i++) {
      v *= (long long) p[bit[i]];
    }

    for (int i = 0; i < N; ++i) {
      if (gcd(X[i], v) == 1) {
        break;
      }
      if (i == N - 1) {
        ans = min(ans, v);
      }
    }

  }
  
  cout << ans << endl;
  
  return 0;

}
```
