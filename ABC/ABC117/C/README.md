### ABC117

# C - Streamline

  [問題はこちら](https://atcoder.jp/contests/abc117/tasks/abc117_c)


## 発想

  X を小さい順に並び替える。<br>
  各点の距離を配列に入れる。<br>
  距離を短い順に並び替える。<br>
  小さい順に (M - N) 個分移動するのが最小手数。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, M;
  cin >> N >> M;

  vector<int> X(M);
  for (int i = 0; i < M; i++) {
    cin >> X[i];
  }

  int answer = 0;

  // X を小さい順に並び替える
  sort(X.begin(), X.end());

  vector<int> distance(M-1);

  // 各点の距離を配列に入れる
  for (int i = 0; i < M -1; i++){
    distance[i] = abs(X[i] - X[i + 1]);
  }

  // 距離を短い順に並び替える
  sort(distance.begin(), distance.end());

  // 小さい順に (M - N) 個分移動させる
  for (int i = 0; i < M - N; i++) {
    answer += distance[i];
  }

  cout << answer << endl;

  return 0;

}
```
