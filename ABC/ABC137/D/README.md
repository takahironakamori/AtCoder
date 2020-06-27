### ABC137

# D - Summer Vacation

  [問題はこちら](https://atcoder.jp/contests/abc137/tasks/abc137_d)


## 発想

  M 日後から i (1 ≦ i ≦ M) 日前には A<sub>j</sub> ≦ iとなるものしか選べない。<br>
  M 日後から 1 日前へ後ろから見ていくと、<br>
  まず、A<sub>j</sub> ≦ 1 となる j の中で B<sub>j</sub> が最大になるものを選択すればいい。<br>
  次に、A<sub>j</sub> ≦ 2 かつ上で選ばれていない j の中で B<sub>j</sub> が最大になるものを選択すればいい。
  最大になるものは priority_queue を使う。

## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, M;
    cin >> N >> M;

    vector<vector<int>> v(M);
    for (int i = 0; i < N; i++) {
      int A, B;
      cin >> A >> B;
      if (M < A) {
        continue;
      }
      v[M - A].push_back(B);
    }

    priority_queue<int> q;
    long long ans = 0;

    for (int i = M - 1; 0 <= i; i--) {
      for (int j = 0; j < v[i].size(); j++) {
        q.push(v[i][j]);
      }
      if (!q.empty()){
        ans += q.top();
        q.pop();
      }
    }

    cout << ans << endl;
    return 0;

  }
  ```
