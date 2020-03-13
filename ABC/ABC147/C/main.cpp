#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<vector<pair<int,int>>> xy(N);
  for (int i = 0; i < N; i++) {
    int A;
    cin >> A;
    for (int j = 0; j < A; j++) {
      int x, y;
      cin >> x >> y;
      xy[i].push_back(make_pair(x,y));
    }
  }

  int answer = 0;

  for(int bits = 1; bits < (1 << N); bits++) {

    // bit全探索用の文字列
    string bit = "";

    // bit全探索の文字列のうち1（正直者）の数
    int count = 0;

    // bit全探索する
    for (int i = 0; i < N; i++) {
      if (bits & (1 << i)) {
        bit += '1';
        count++;
      } else {
        bit += '0';
      }
    }

    // 矛盾がない（true）ある（false）
    bool flg = true;

    // N人全員確認する
    for (int i = 0; i < N; i++) {

      // i が正直者と考える場合
      if (bit[i] - '0' == 1) {

        // i の証言
        int c = xy[i].size();

        // i の証言に矛盾がないかを確認する
        for (int j = 0; j < c; j++) {

          // bit全探索の状況とiの証言が一致しない場合、それは矛盾
          if (bit[xy[i][j].first - 1] - '0' != xy[i][j].second) {
            flg = false;
            break;
          }
        }
      }

      // すでに矛盾があるので残りは調べない
      if (!flg) {
        break;
      }

    }

    // 矛盾がない場合の正直者の数の最大値が答え
    if (flg) {
      answer = max(count, answer);
    }

  }

  cout << answer << endl;

}
