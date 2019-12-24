### ABC059

# A - Three-letter acronym

  [問題はこちら](https://atcoder.jp/contests/abc059/tasks/abc059_a)

- 発想<br>
  ASCIIコードを利用して大文字に変換するか（C++のコード）、<br>
  toUpperCase()を利用する方法（Javaのコード）がある。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    cout << char(s1[0] - 32) << char(s2[0] - 32) << char(s3[0] - 32) << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      String s1 = sc.next();
      String s2 = sc.next();
      String s3 = sc.next();

      s1 = s1.substring(0,1);
      s2 = s2.substring(0,1);
      s3 = s3.substring(0,1);

      System.out.println(s1.toUpperCase() + s2.toUpperCase() + s3.toUpperCase());

    }
  }
  ```
    