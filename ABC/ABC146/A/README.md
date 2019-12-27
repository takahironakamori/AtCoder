### ABC146

# A - Can't Wait for Holiday

  [問題はこちら](https://atcoder.jp/contests/abc146/tasks/abc146_a)

- 発想<br>
  どの曜日でも、何日後に日曜日になるのかは固定できるので、S に応じてその値を出力する。<br>
  
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string s;
    cin >> s;

    if (s == "MON") {
      cout << 6 << endl;
    } else if (s == "TUE") {
      cout << 5 << endl;
    } else if (s == "WED") {
      cout << 4 << endl;
    } else if (s == "THU") {
      cout << 3 << endl;
    } else if (s == "FRI") {
      cout << 2 << endl;
    } else if (s == "SAT") {
      cout << 1 << endl;
    } else if (s == "SUN") {
      cout << 7 << endl;
    }

  }
  ```
    