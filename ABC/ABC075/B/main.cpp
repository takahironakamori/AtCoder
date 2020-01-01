#include <bits/stdc++.h>
using namespace std;

int main() {

  int H, W;
  cin >> H >> W;

  vector<vector<string>> answer(H, vector<string>(W));

  for (int i = 0; i < H; i++) {
    string S;
    cin >> S;
    for (int j = 0; j < W; j++) {
      answer[i][j] = S[j];
    }
  }

  vector<int> dx = {1, 0, -1, 0, 1, -1, -1, 1};
  vector<int> dy = {0, 1, 0, -1, 1, 1, -1, -1};

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if (answer[i][j] == ".") {
        int count = 0;
        for (int d = 0; d < 8; d++) {
          int i_ = i + dy[d];
          int j_ = j + dx[d];
          if (i_ < 0 || H <= i_) {
            continue;
          }
          if (j_ < 0 || W <= j_) {
            continue;
          }
          if (answer[i_][j_] == "#") {
            count++;
          }
        }
        answer[i][j] = to_string(count);
      }
    }
  }

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cout << answer[i][j];
    }
    cout << endl;
  }

}