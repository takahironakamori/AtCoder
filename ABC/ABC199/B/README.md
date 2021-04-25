### ABC199

# B - Intersection

  [問題文はこちら](https://atcoder.jp/contests/abc199/tasks/abc199_b)


## 発想

　・
  


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;


int main() {

  int N;
  cin >> N;

  vector<int> A(N);
  for (int i = 0; i < N; ++i) {
    cin >> A[i];
  }

  vector<int> B(N);
  for (int i = 0; i < N; ++i) {
    cin >> B[i];
  }

  map<int,int> mp;
  for (int i = 0; i < N; ++i) {
    for (int j = A[i]; j <= B[i]; ++j) {
      mp[j]++;
    }
  }

  int ans = 0;
  for (auto item : mp ){
    if (item.second == N) {
      ans++;
    }
  } 

  cout << ans << endl;
  return 0;

}
```
