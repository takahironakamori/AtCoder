### ABC192

# D - Base n

  [問題文はこちら](https://atcoder.jp/contests/abc192/tasks/abc192_d)


## 発想

　・
  


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

long long f(string v, int n) {
  long long result = 0;
  reverse(v.begin(), v.end());
  for (int i = 0; i < int(v.size()); ++i) {
    result += (v[i] - '0') * pow(n, i);
  } 
  return result;
}

int main() {
  
  string X;
  cin >> X;

  long long M;
  cin >> M;

  if (X.size() == 1) {
    if (stoi(X) <= M) {
      cout << 1 << endl;
    } else {
      cout << 0 << endl;
    }
    return 0;
  }

  int start = 0;

  for (int i = 0; i < int(X.size()); ++i) {
    start = max(start, (X[i] - '0'));
  }

  long long ac = start;
  long long wa = M + 1;
  
  while (1 < wa - ac) {
    long long mid = (ac + wa) / 2;
    long long v = 0;
    for (int i = 0; i < int(X.size()); ++i) {
      if (M / mid < v) {
        v = M + 1;
      } else {
        v = v * mid + (X[i] - '0');
      }
    }
    if (v <= M) {
      ac = mid;
    } else {
      wa = mid;
    }
  }
  
  cout << ac - start << endl;

  return 0;

}
```
