### ABC066

# B - ss

  [問題はこちら](https://atcoder.jp/contests/abc066/tasks/abc066_b)

- 発想
  
  文字列操作。<br>
  文字列を1文字後ろから削除して、
  文字列の前半分と後ろ半分を比較すればいい。<br>
  比較するのは、文字列の長さは偶数の時だけでいい。<br>
  偶数か否かを確認するものいいし、2文字ずつ削除してもいい。

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string S;
    cin >> S;

    int count = 0;
    string s_ = S;

    for (int i = 1; i < S.length(); i++) {

      s_ = s_.erase(s_.length() - 1);

      if (s_.length() % 2 == 0) {
        
        string s1_ = s_.substr(s_.length() / 2);
        string s2_ = s_.substr(0, s_.length() / 2);
        
        if (s1_ == s2_) {
          count = s_.length();
          break;
        }
        
      } else {
        continue;
      }

    }

    cout << count << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      String s = sc.next();

      sc.close();

      String[] S = s.split("");

      for (int i = S.length - 2; 2 <= i; i = i - 2) {
        
        String s1 = s.substring(0, i / 2);
        String s2 = s.substring(i/2, i);
        
        if (s1.equals(s2)) {
          System.out.println(i);
          break;
        }
        
      }

    }

  }
  ```
    