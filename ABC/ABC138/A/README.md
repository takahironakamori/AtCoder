### ABC138

# A - Red or Not

  [問題はこちら](https://atcoder.jp/contests/abc138/tasks/abc138_a)

- 発想<br>
  3200 <= a なら、s を、<br>
  そうでない場合は、red を出力する。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int a;
    cin >> a;

    string s;
    cin >> s;

    if (3200 <= a) {
      cout << s << endl;
    } else {
      cout << "red" << endl;
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int a = sc.nextInt();
      String s = sc.next();

      sc.close();

      if (3200 <= a) {
        System.out.println(s);
      } else {
        System.out.println("red");
      }

    }

  }
  ```
    