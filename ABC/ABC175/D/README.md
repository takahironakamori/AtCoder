### ABC175

# D - Moving Piece

  [問題文はこちら](https://atcoder.jp/contests/abc175/tasks/abc175_d)


## 発想

　・
  


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;


int main() {
  
  int N, K;
  cin >> N >> K;

  vector<int> P(N);
  vector<int> C(N);

  for (int i = 0; i < N; ++i) {
    cin >> P[i];
    P[i]--;
  }
  
  for (int i = 0; i < N; ++i) {
    cin >> C[i];
  }

  long long ans = -1e18;

  for (int i = 0; i < N; ++i) {

    int x = i;
    vector<int> graph;
    long long sum = 0;
    
    // 周期を確認する
    while (true) {
      x = P[x];
      graph.push_back(C[x]);
      sum += C[x];
      if (x == i) {
        break;
      }
    }

    long long current = 0;
    int l = graph.size();
    for (int j = 0; j < l; ++j) {
      if (K < j + 1) {
        break;
      }
      current += graph[j];
      long long result = current;
      if (0 < sum) {
        long long count = (K - (j+1)) / l;
        result += sum * count;
      }
      ans = max(ans, result);
    }

  }

  cout << ans << endl;

  return 0;

}
```
