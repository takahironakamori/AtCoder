### ABC168

# B - ... (Triple Dots)

  [問題はこちら](https://atcoder.jp/contests/abc168/tasks/abc168_b)


## 発想

  Sの長さがK以下であれば、Sをそのまま出力し、<br>
  そうでない場合は、SをK文字抜き出して、...をつける。
  

## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int K;
  cin >> K;

  string S;
  cin >> S;

  if (K < S.size()) {
    cout << S.substr(0,K)  << "..." << endl;
  } else{
    cout << S << endl;
  }  

  return 0;

}
```
