### ABC056

# A - HonestOrDishonest

  [問題はこちら](https://atcoder.jp/contests/abc056/tasks/abc056_a)

- 発想<br>
  a が H なら、b の内容に応じて出力する。<br>
  a が D なら、b の内容の反対を出力する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string a, b;
    cin >> a >> b;

    string answer = "";

    if (a == "H") {
      if (b == "H") {
        answer = "H";
      } else {
        answer = "D";
      }
    } else {
      if (b == "H") {
        answer = "D";
      } else {
        answer = "H";
      }
    }

    cout << answer << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      String a = sc.next();
      String b = sc.next();

      if (a.equals("H")) {
        if (b.equals("H")) {
          System.out.println("H");
        } else {
          System.out.println("D");
        }
      } else {
        if (b.equals("H")) {
          System.out.println("D");
        } else {
          System.out.println("H");
        }
      }

    }
  }
  ```
    