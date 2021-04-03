### ABC196

# D - Hanjo

  [問題文はこちら](https://atcoder.jp/contests/abc196/tasks/abc196_d)


## 発想

　・
  


## コード（C++）

```cpp
#include <bits/stdc++.h>
using namespace std;

int H, W;
vector<vector<bool>> room(16, vector<bool>(16));

int dfs(int i, int j, int a, int b) {

  if (a < 0 || b < 0) {
    return 0;
  }
  if (j == W) {
    j = 0;
    i += 1;
  }
  if (i == H) {
    return 1;
  }
  if (room[i][j] == true) {
    return dfs(i, j+1, a, b);
  }

  int result = 0;
  room[i][j] = true;
  result += dfs(i, j+1, a, b - 1);
  if (j+1 < W && room[i][j+1] == false) {
    room[i][j+1] = true;
    result += dfs(i, j+1, a - 1, b);
    room[i][j+1] = false;
  }
  if (i+1 < H && room[i+1][j] == false) {
    room[i+1][j] = true;
    result += dfs(i, j+1, a - 1, b);
    room[i+1][j] = false;
  }
  room[i][j] = false;
  return result;
  
}

int main() {
  
  cin >> H >> W;
  int A, B;
  cin >> A >> B;

  cout << dfs(0, 0, A, B) << endl;
  
  return 0;

}
```
