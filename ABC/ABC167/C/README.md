### ABC167

# C - Skill Up

  [問題はこちら](https://atcoder.jp/contests/abc167/tasks/abc167_c)


## 発想

  全探索で確認する。<br>
  すなわち、N冊の本について、それぞれ買った場合、買わなかった場合でM個のアルゴリズムの理解度を計算する。<br>

## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  long long INF = 1LL<<60;

  long long N, M, X;
  cin >> N >> M >> X;

  vector<long long> C(N);
  vector<vector<long long>> A(N, vector<long long>(M));

  for (int i = 0; i < N; i++) {
    cin >> C[i];
    for (int j = 0; j < M; j++) {
      cin >> A[i][j];
    }
  }

  long long answer = INF;

  for(int bits = 1; bits < (1 << N); bits++) {

    vector<int> bit;

    for (int i = 0; i < N; i++) {
      if (bits >> i & 1) {
        bit.push_back(i);
      }
    }

    vector<int> master(M, 0);

    long long cost = 0;

    for (int i = 0; i < bit.size(); i++) {
      int v = bit[i];
      cost += C[v];
      for (int j = 0; j < A[v].size(); j++) {
        master[j] += A[v][j];
      }
    }

    bool flg = true;
    for (int i = 0; i < M; i++) {
      if (master[i] < X) {
        flg = false;
        break;
      }
    }

    if (flg) {
      answer = min(answer, cost);
    }

  }

  if (answer == INF) {
    cout << "-1" << endl;
  } else {
    cout << answer << endl;
  }

  return 0;
}
```
