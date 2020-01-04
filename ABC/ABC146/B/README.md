### ABC146

# B - ROT N

  [問題はこちら](https://atcoder.jp/contests/abc146/tasks/abc146_b)


- 発想<br>
  i 文字目のASCII コード + n が 90 以下（= Z までに収まる）の場合は、そのまま n を足したものを、<br>
  それ以外の場合は、i 文字目のASCII コード + 65 + n - 91 を求める<br> 
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
      int c = (int) s[i];
      if (c + n <= 90) {
        cout << char((int) s[i] + n);
      } else {
        c = 65 + c + n - 91;
        cout << char(c);
      }

    }

    cout << endl;

  }
  ```
    