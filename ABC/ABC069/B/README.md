### ABC069

# B - i18n

  [問題はこちら](https://atcoder.jp/contests/abc069/tasks/abc069_b)

- 発想<br>
  s の 1 文字目、文字数 - 2 、最後の文字を出力する。<br> 
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string s;
    cin >> s;

    cout << s[0] << s.size() - 2 << s[s.size() - 1] << endl;

  }
  ```

- コード（Java）
  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      String S = sc.next();

      sc.close();

      String r = S.substring(0,1) + (S.length() - 2) + S.substring(S.length() - 1);

      System.out.println(r);

    }

  }
  ```
    