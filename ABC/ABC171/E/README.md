### ABC171

# E - Red Scarf

  [問題はこちら](https://atcoder.jp/contests/abc171/tasks/abc171_e)


## 発想

  A<sub>2</sub>からA<sub>N</sub>までのxorをAとして、<br>
  A<sub>1</sub>からA<sub>N</sub>までのxorをBとすると、<br>
  A xor B は A<sub>1<sub>となる。


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<int> a(N);
  int sum = 0;
  for (int i = 0; i < N; i++) {
    cin >> a[i];
    sum = sum ^ a[i];
  }

  for (int i = 0; i < N; i++) {
    int ans = a[i] ^ sum;
    cout << ans << " ";
  }

  cout << endl;

  return 0;

}
```
