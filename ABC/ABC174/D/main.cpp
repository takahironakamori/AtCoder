#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;
  
  string c;
  cin >> c;

  // 区切りの位置より右にある R の数
  int countR = 0;

  // 区切りの位置より左になる W の数
  int countW = 0;

  for (int i = 0; i < N; ++i) {
    if (c[i] == 'R') {
      countR++;
    }
  }
  
  // 全部 W（区切り位置が 0）の場合
  int ans = countR;

  // 残り全パターンを調べる
  for (int i = 0; i < N; ++i) {
    if (c[i] == 'R') {
      countR--;
    } else {
      countW++;
    }
    int current = max(countR, countW);
    ans = min(current, ans);
  }

  cout << ans << endl;
  

  return 0;

}