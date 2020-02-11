### ABC007

# C - 幅優先探索

  [問題はこちら](https://atcoder.jp/contests/abc007/tasks/abc007_3)

- 発想<br>
  幅優先探索。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    vector<int> dx = {0, 1, 0, -1};
    vector<int> dy = {1, 0, -1, 0};

    int R, C, sy, sx, gy, gx;
    cin >> R >> C >> sy >> sx >> gy >> gx;

    vector<string> c(R);
    for (int i = 0; i < R; i++) {
      cin >> c[i];
    }

    queue<pair<int, int>> que;
    que.push(make_pair(sx - 1, sy - 1));

    vector<vector<int>> steps(R, vector<int>(C, -1));
    steps[sy - 1][sx - 1] = 0;

    while (!que.empty()) {

      pair<int, int> p_ = que.front();
      int x_ = p_.first;
      int y_ = p_.second;
      que.pop();

      for (int i = 0; i < 4; i++) {
        int cx_ = x_ + dx[i];
        int cy_ = y_ + dy[i];
        if (c[cy_][cx_] == '#') {
          continue;
        }
        if (steps[cy_][cx_] == -1) {
          que.push(make_pair(cx_, cy_));
          steps[cy_][cx_] = steps[y_][x_] + 1;
        }
      }

    }

    cout <<steps[gy - 1][gx - 1] << endl;

    return 0;

  }
  ```
