### ABC165

# A - We Love Golf

  [問題はこちら](https://atcoder.jp/contests/abc165/tasks/abc165_a)


## 発想

  Bに近いKの倍数が、A以下であればOK。<br>


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int K, A, B;
  cin >> K >> A >> B;

  int check = (B / K) * K;

  if (A <= check) {
    cout << "OK" << endl;
  } else {
    cout << "NG" << endl;
  }

  return 0;
}
```

## コード2（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int K, A, B;
  cin >> K >> A >> B;

  int current = 1;

  while(current * K <= B) {
    if (A <= current * K && current * K <= B) {
      cout << "OK" << endl;
      return 0;
    } else {
      current++;
    }
  }

  cout << "NG" << endl;

  return 0;
}
```
