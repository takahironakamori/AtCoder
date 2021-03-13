### PAST(第1回)

# G - 組分け

  [問題はこちら](https://atcoder.jp/contests/past201912-open/tasks/past201912_g)


- 発想<br>
  全ての組分けのパターンは 3^N(N=10 のとき, 59049) なので、全パターン試すことができる。<br>
  組分けのパターンはdfs等で作る。


- コード（C++）

  ```cpp
#include <bits/stdc++.h>
using namespace std;

const long long INF = 1LL << 60;
int N = 0;
vector<vector<int>> a(0);
vector<vector<int>> group(3);


long long dfs(int current) {

  // 組分けができたら、幸福度を計算する
  if (N < current) {
    long long h = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < (int) group[i].size(); j++) {
          for (int k = j + 1; k < (int) group[i].size(); k++) {
            h += a[group[i][j]][group[i][k]];
          }
        }
    }
    return h;
  }

  long long ans = -INF;

  for (int i = 0; i < 3; i++) {
    group[i].push_back(current);
    long long h = dfs(current+1);
    if (ans < h) {
      ans = h;
    }
    // 追加した社員をいったん戻す
    group[i].pop_back();
  }
  return ans;
}


int main() {

  cin >> N;

  a.resize(N+1);

  for (int i = 1; i < N+1; i++) {
    a[i].resize(N+1);
    for (int j = i + 1; j < N+1; j++) {
      cin >> a[i][j];
    }
  }

  cout << dfs(1) << endl;

  return 0;

}
  ```
    