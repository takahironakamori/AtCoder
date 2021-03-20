### ABC194

# E - Mex Min

  [問題文はこちら](https://atcoder.jp/contests/abc194/tasks/abc194_e)


## 発想

　・
  


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;


int main() {

  int N, M;
  cin >> N >> M;

  vector<int> A(N);
  for (int i = 0; i < N; ++i) {
    cin >> A[i];
  }
  
  // mexの範囲内にある数字の個数
  vector<int> count(N);
  for (int i = 0; i < M; ++i) {
    count[A[i]]++;
  }

  // 使っていない数字を管理する
  set<int> st;
  for (int i = 0; i <= N; ++i) {
    if (count[i] == 0) {
      st.insert(i);
    }
  }

  int ans = N;

  for (int i = 0; i < N - M + 1; ++i) {

    // 使っていない数字の最小を更新
    ans = min(ans, *(st.begin()));
    
    // 使用済みを削除する
    count[A[i]]--;

    // count が 0 になったら、使っていない数字に加える
    if (count[A[i]] == 0) {
      st.insert(A[i]);
    }

    // 次の数字を加える
    count[A[i + M]]++;

    // 使っているので使っていない数字から削る
    st.erase((A[i + M]));

  }

  cout << ans << endl;

  return 0;

}
```
