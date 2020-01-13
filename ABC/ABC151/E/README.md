### ABC151

# E - Max-Min Sums

  [問題はこちら](https://atcoder.jp/contests/abc151/tasks/abc151_e)


- 発想<br>
  
  スタート位置は、H × W パターン考えられる。<br>
  ゴールの位置は、移動回数を最大にするためにはスタート位置から最も移動回数が多いところがゴールになる。<br>
  移動回数は bfs で数える。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int sx;
    int sy;
    int INF = 999999;

    vector<vector<int>> count(21, vector<int>(21));
    vector<vector<int>> count_(21, vector<int>(21));

    deque<pair<int,int>> que;

    vector<int> dx = {0, 1, 0, -1};
    vector<int> dy = {1, 0, -1, 0};

    int H, W;
    cin >> H >> W;

    vector<string> S;
    S.resize(H);

    for (int i = 0; i < H; i++) {
      cin >> S[i];
    }

    for (int i = 0; i < H; i++) {
      for (int j = 0; j < W; j++) {
        count_[i][j] = INF;
      }
    }

    count = count_;

    int answer = 0;

    for (int j = 0; j < H; j++) {
      for (int k = 0; k < W; k++) {

        if (S[j][k] == '.') {

          sx = k;
          sy = j;

          que.clear();
          que.push_back(make_pair(sy, sx));

          count = count_;
          count[sy][sx] = 0;

          while (!que.empty()) {

            pair<int,int> p = que.front();
            que.pop_front();

            for (int i = 0; i < 4; i++) {

              int dx_ = p.second + dx[i];
              int dy_ = p.first + dy[i];

              if (0 <= dy_ && dy_ < H && 0 <= dx_ && dx_ < W && count[dy_][dx_] == INF && S[dy_][dx_] == '.'){
                count[dy_][dx_] = count[p.first][p.second] + 1;
                answer = max(answer, count[dy_][dx_]);
                que.push_back(make_pair(dy_, dx_));
              }

            }

          }

        }

      }
    }

    cout << answer << endl;

  }
  ```
    