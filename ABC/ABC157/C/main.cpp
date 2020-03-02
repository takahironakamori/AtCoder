#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, M;
  cin >> N >> M;

  vector<pair<int,int>> sc(N);
  for (int i = 0; i < M; i++) {
    cin >> sc[i].first >> sc[i].second;
  }

  // N=1のときは、答えは0から9まで
  // N=2のときは、答えは10から99まで
  // N=3のときは、答えは100から999まで
  int start[3] = {0,10,100};
  int end[3] = {9,99,999};

  // Nに合わせて可能性がある答えを小さい数から順番に確認する。
  for (int i = start[N - 1]; i <= end[N - 1]; i++) {

    // 文字列にしておく
    string str = to_string(i);

    // 答えが存在するか(true)しないか(false)
    bool flg = true;

    // 1桁ごと確認する。
    // 見ている桁とs_iが同じだったら、
    // その桁の値とc_iが同じかチェックする。
    // 値とc_iが異なると答えは存在しない。
    for (int j = 0; j < N; j++) {
      for (int k = 0; k < M; k++) {
        if (j + 1 == sc[k].first) {
          if (sc[k].second != str[j] - '0'){
            flg = false;
          }
        }
      }
    }

    // flaがtrueのままfor文が終わった最初のiが答え。
    if (flg) {
      cout << i << endl;
      return 0;
    }
  }

  cout << -1 << endl;

  return 0;

}
