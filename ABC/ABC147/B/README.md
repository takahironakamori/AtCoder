### ABC147

# B - Palindrome-philia

  [問題はこちら](https://atcoder.jp/contests/abc147/tasks/abc147_b)


- 発想<br>
  文字列の両端から1文字ずつ調べていき、異なる文字の場合の数を数える。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string s;
    cin >> s;

    int answer = 0;

    for (int i = 0; i < s.size() / 2; i++)  {

      if (s[i] != s[s.size() - 1 - i]) {
        answer++;
      }

    }

    cout << answer << endl;

  }
  ```
    