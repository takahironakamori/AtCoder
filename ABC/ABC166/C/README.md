### ABC166

# C - Peaks

  [問題はこちら](https://atcoder.jp/contests/abc166/tasks/abc166_c)


## 発想

  「展望台iから一本の道を使ってたどり着ける展望台の標高の最大値よりも展望台iが高い」ということ。<br>
  それぞれの展望台について、たどり着ける展望台の標高の最大値を探せばいい。
  

## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, M;
  cin >> N >> M;

  vector<int> H(N);
  for (int i = 0; i < N; i++) {
    cin >> H[i];
  }

  vector<int> mx(N);
  for (int i = 0; i < M; i++) {
    int A, B;
    cin >> A >> B;
    --A;
    --B;
    mx[A] = max(H[B], mx[A]);
    mx[B] = max(H[A], mx[B]);
  }

  int answer = 0;

  for (int i = 0; i < N; i++) {
    if (mx[i] < H[i]) {
      answer++;
    }
  }

  cout << answer << endl;

  return 0;

}
```
