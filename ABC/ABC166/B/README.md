### ABC166

# B - Trick or Treat

  [問題はこちら](https://atcoder.jp/contests/abc166/tasks/abc166_b)


## 発想

  各すぬけ君が持っているお菓子を数える。<br>
  お菓子を持っていないすぬけ君の数を数える。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, K;
  cin >> N >> K;

  vector<int> A(N);
  for (int i = 0; i < K; i++) {
    int d;
    cin >> d;
    for (int j = 0; j < d; j++) {
      int a;
      cin >> a;
      A[a-1]++;
    }
  }

  int answer = 0;
  for (int i = 0; i < N; i++) {
    if (A[i] == 0) {
      answer++;
    }
  }

  cout << answer << endl;

  return 0;

}
```
