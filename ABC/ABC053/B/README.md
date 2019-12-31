### ABC053

# B - A to Z String

  [問題はこちら](https://atcoder.jp/contests/abc053/tasks/abc053_b)


- 発想<br>
  s の文字数から、<br>
  s を先頭から調べていき、最初に A があった位置と、<br>
  s を末尾から調べていき、最初に Z があった位置を<br>
  引いて、1 加えた値が回答となる。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string s;
    cin >> s;

    int left = 0;
    int right = 0;

    for (int i = 0; i < s.size(); i++) {
      if (s[i] == 'A') {
        left = i;
        break;
      }
    }

    for (int i = s.size() - 1; 0 <= i; i--) {
      if (s[i] == 'Z') {
        right = s.size() - i;
        break;
      }
    }

    cout << s.size () - left - right + 1 << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      String S_ = sc.next();

      sc.close();

      String[] S = S_.split("");

      int start = 0;

      for (int i = 0; i < S.length; i++) {

        if (S[i].equals("A")) {
          start = i;
          break;
        }

      }

      int end = 0;

      for (int i = S.length - 1; 0 <= i; i--) {

        if (S[i].equals("Z")) {
          end = i;
          break;
        }

      }

      System.out.println(end - start + 1);

    }

  }
  ```
    