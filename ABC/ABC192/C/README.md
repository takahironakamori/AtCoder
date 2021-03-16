### ABC191

# C - Kaprekar Number

  [問題文はこちら](https://atcoder.jp/contests/abc192/tasks/abc192_c)


## 発想

　・
  


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

long long g1(long long n) {
  string s = to_string(n);
  sort(s.begin(), s.end());
  long long result = 0;
  for (int i = 0; i < int(s.size()); ++i) {
    result += (s[i] - '0') * pow(10, i);
  }
  return result;
}

long long g2(long long n) {
  string s = to_string(n);
  sort(s.rbegin(), s.rend());
  long long result = 0;
  for (int i = 0; i < int(s.size()); ++i) {
    result += (s[i] - '0') * pow(10, i);
  }
  return result;
}


int main() {

  int N, K;
  cin >> N >> K;

  long long ans = N;
  long long current = N;

  for (int i = 0; i < K; ++i) {
    long long v1 = g1(current);
    long long v2 = g2(current);
    current = v1 - v2;
    ans = current;
  }

  cout << ans << endl;

  return 0;

}
```
