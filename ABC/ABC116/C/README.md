### ABC116

# C - Grand Garden

  [問題はこちら](https://atcoder.jp/contests/abc116/tasks/abc116_c)


## 発想

  初期値0の変数currentと答え用の変数を用意する。<br>
  h[i] が current 未満のときは、current - h[i]を答えに加える。<br>
  i を更新する度に、current に h[i] を入れる。<br>
  i が N になるまで繰り返す。<br>
  最後のcurrentを答えに加える。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<int> h(N);
  int mx = 0;
  for(int i = 0; i < N; i++) {
    cin >> h[i];
    mx = max(mx, h[i]);
  }

  int answer = 0;
  int current = 0;

  for (int i = 0; i < N; i++) {
    if (h[i] < current) {
      answer += current - h[i];
    }
    current = h[i];
  }

  answer += current;

  cout << answer << endl;

  return 0;

}
```
