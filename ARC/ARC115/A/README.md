### ARC115

# A - Two Choices

[問題はこちら](https://atcoder.jp/contests/arc115/tasks/arc115_a)


## 発想

  


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, M;
  cin >> N >> M;

  int odd = 0;
  int even = 0;
  
  for (int i = 0; i < N; ++i) {
    string S;
    cin >> S;
    int count = 0;
    for (int j = 0; j < M; ++j) {
      if (S[j] == '0') {
        count++;
      }
    }
    if (count % 2 == 0) {
      even++;
    } else {
      odd++;
    }
  }

  long long ans = (long long) even * odd;
  cout << ans << endl;

  return 0;

}
```
