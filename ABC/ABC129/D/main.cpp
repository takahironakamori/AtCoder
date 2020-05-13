#include <bits/stdc++.h>
using namespace std;

int main() {

  int H, W;
  cin >> H >> W;

  vector<string> S(H);
  for (int i = 0; i < H; i++){
    cin >> S[i];
  }

  // 各マスを縦に見たときに何個 "."が続くかを数える
  // グループIDを入れる配列
  vector<vector<int>> h(W,vector<int>(H));

  // グループIDに対応した値を入れる配列
  vector<vector<int>> countH(W);

  for (int i = 0; i < W; i++){
    int count = 0;
    int current = 0;
    for (int j = 0; j < H; j++){
      if (S[j][i] == '.') {
        h[i][j] = count;
        current++;
        if (j == H - 1) {
          countH[i].push_back(current);
        }
      } else {
        countH[i].push_back(current);
        current = 0;
        count++;
      }
    }
  }

  // 各マスを横に見たときに何個 "."が続くかを数える
  // グループIDを入れる配列
  vector<vector<int>> w(H,vector<int>(W));

  // グループIDに対応した値を入れる配列
  vector<vector<int>> countW(H);

  for (int i = 0; i < H; i++){
    int count = 0;
    int current = 0;
    for (int j = 0; j < W; j++){
      if (S[i][j] == '.') {
        w[i][j] = count;
        current++;
        if (j == W - 1) {
          countW[i].push_back(current);
        }
      } else {
        countW[i].push_back(current);
        current = 0;
        count++;
      }
    }
  }

  int answer = 0;

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if (S[i][j] == '.') {
        int ans = countW[i][w[i][j]] + countH[j][h[j][i]] - 1;
        answer = max(answer, ans);
      }
    }
  }

  cout << answer << endl;


  return 0;
}
