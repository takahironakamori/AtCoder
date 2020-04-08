### ABC023

# C - 収集王

  [問題はこちら](https://atcoder.jp/contests/abc023/tasks/abc023_c)


## 発想

  各行、各列について飴が何個あるかを計算する。<br>
  次に飴がX個ある行（列）がY個あるという情報を、行ごと、列ごとに集計する。<br>
  和がK個となるマス数、すなわち、(行からi個の飴) ×（列からK-i個の飴）という組み合わせをi=0,1,...Kについて集計する。<br>
  起点に飴があり、和がK個となるマス数だけ引く。<br>
  起点に飴があり、和がK+1となるマス数だけ足す。


## コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    string S;
    cin >> S;

    bool flg = true;
    int answer = 0;
    string current = "";

    while (flg) {
      if (answer == 0) {
        current += "b";
      } else if (answer % 3 == 1) {
        current = "a" + current + "c";
      } else if (answer % 3 == 2) {
        current = "c" + current + "a";
      } else if (answer % 3 == 0 && 0 < answer) {
        current = "b" + current + "b";
      }
      if (S == current) {
        flg = false;
      } else if (N <= current.size()) {
        flg = false;
        answer = -1;
      } else {
        answer++;
      }
    }

    cout << answer << endl;

  }
  ```
