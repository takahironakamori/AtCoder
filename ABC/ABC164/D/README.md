### ABC164

# D - Multiple of 2019

  [問題はこちら](https://atcoder.jp/contests/abc164/tasks/abc164_d)


## 発想

  


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int mod = 2019;

  string S;
  cin >> S;

  /*
  S = 181718
  
  keta  | 10^5 10^4 10^3 10^2 10^1 10^0
  S     |    1    8    1    7    1    8
  amari |    8  958 1718  718   18    8

  amari : 10^0 から 10^5 までの余りの累積和
  amari が同じ値の範囲（10^5 から 10^1 までを抜き出した値:18171）は 2019 で割り切れる
  amari の値を n とすると、nC2 個答えに加える
  */

  long long ans = 0;
  int amari = 0;
  int keta = 1;
  vector<int> count(mod);
  count[0]++;
  
  for (int i = 1; i <= int(S.size()); ++i) {
    amari += (S[S.size() - i] - '0') * keta;
    amari %= mod;
    ans += count[amari];
    count[amari]++;
    //10^keta は予めmodを計算しておく
    keta = (keta * 10) % mod;
  }
  
  cout << ans << endl;
  
  return 0;

}
```
