### ABC121

# C - Energy Drink Collector

  [問題はこちら](https://atcoder.jp/contests/abc121/tasks/abc121_c)

## 発想

  pair<単価,数量>の配列を作って、単価が低い順に並び替える。<br>
  M 本を消化するまで、単価が低い順から買っていく。


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, M;
    cin >> N >> M;

    vector<pair<int,int>> store(N);
    for (int i = 0; i < N; i++) {
      cin >> store[i].first >> store[i].second;
    }

    sort(store.begin(), store.end());

    long long answer = 0;

    int current = 0;
    while (0 < M) {
      answer += (long long) store[current].first * min(M, store[current].second);
      M -= store[current].second;
      current++;
    }

    cout << answer << endl;

    return 0;

  }
  ```
