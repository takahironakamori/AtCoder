### ABC002

# D - 派閥

  [問題はこちら](https://atcoder.jp/contests/abc002/tasks/abc002_4)

- 発想<br>

  人間関係を管理する配列を用意する。<br>
  N人で、所属する or しないの 2 パターンあるので、全部で 2^n パターンとなり、<br>
  全パターンチェックできる。<br>
  全パターンは bit 全探索で生成する。<br>
  bit が 1 の場所と人間関係の配列を比較する。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, M;
    cin >> N >> M;

    // 人間関係を管理する配列
    vector<vector<int>> list(N + 1, vector<int>(N + 1));

    for (int i = 0; i < M; i++) {
      int x, y;
      cin >> x >> y;
      list[x][y] = 1;
      list[y][x] = 1;
    }

    int answer = 0;

    // 全パターンチェック
    // N人で、所属する or しないの 2 パターンあるので、全部で 2^n パターン
    for (int i = 0; i < pow(2, N); i++) {

      // bit
      bitset<12> bit(i);

      // 1 になっている場所を配列 v で管理する
      vector<int> v;
      for (int j = 0; j < bit.size(); j++) {
        if (bit[j] == 1) {
          v.push_back(j + 1);
        }
      }

      // チェック用フラグ
      bool flg = true;

      for (int j = 0; j < v.size(); j++) {
        for (int k = j + 1; k < v.size(); k++) {
          if (list[v[j]][v[k]] != 1) {
            flg = false;
            break;
          }
        }
      }

      if (flg) {
        answer = max(answer,(int) v.size());
      }

    }

    cout << answer << endl;

  }
  ```