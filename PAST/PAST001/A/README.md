### PAST(第1回)

# A - 2 倍チェック

  [問題はこちら](https://atcoder.jp/contests/past201912-open/tasks/past201912_a)


- 発想<br>
  文字列Sの中に数字以外の文字列があるか否かを調べる。<br>
  数字以外の文字列がない場合は、文字列Sを数値に置き換えて2倍したものを出力する。<br>
  数字以外の文字列がある場合は、errorを出力する。


- コード（C++）

  ```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  string S;
  cin >> S;

  bool flg = true;

  for (int i = 0; i < S.size(); i++) {
    int s = (int) S.at(i);
    if (s < 48 || 57 < s) {
      flg = false;
      break;
    }
  }

  if (flg) {
    int ans = (S.at(0) - '0') * 100 + (S.at(1) - '0') * 10 + S.at(2) - '0';
    cout << ans * 2 << endl;
  } else {
    cout << "error" << endl;
  }

  return 0;

}
  ```
    