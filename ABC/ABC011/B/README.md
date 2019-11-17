### ABC011

# B - 名前の確認

  [問題はこちら](https://atcoder.jp/contests/abc011/tasks/abc011_2)

- 発想<br>
  文字列を 1 文字ずつ判定する。
  

- 実装のポイント<br>
  ASCIIコードを利用する場合（C++のコード）と、<br>
  関数を使う場合（Javaのコード）がある。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
      int c = (int) s[i];
      if (i == 0) {
        if ((97 <= c) && (c <= 122)) {
          cout << char(c - 32);
        } else {
          cout << s[i];
        }
      } else {
        if ((65 <= c) && (c <= 90)) {
          cout << char(c + 32);
        } else {
          cout << s[i];
        }
      }
    }

    cout << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      String S = sc.next();
      String[] sArray = S.split("");

      for (int i = 0; i < sArray.length; i++) {
        if (i == 0) {
          System.out.print(sArray[i].toUpperCase());
        } else {
          System.out.print(sArray[i].toLowerCase());
        }
      }

      System.out.println("");

    }
  }
  ```
    