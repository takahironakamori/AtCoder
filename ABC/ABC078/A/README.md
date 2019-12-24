### ABC078

# A - HEX

  [問題はこちら](https://atcoder.jp/contests/abc078/tasks/abc078_a)

- 発想<br>
  X と Y を比較する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string X, Y;
    cin >> X >> Y;

    if (X == Y) {
      cout << "=" << endl;
    } else if (X < Y) {
      cout << "<" << endl;
    } else {
      cout << ">" << endl;
    }

  }
  ```

- コード（Java）
  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      String X = "0x" + sc.next();
      String Y = "0x" + sc.next();

      int X16 = Integer.decode(X);
      int Y16 = Integer.decode(Y);

      if (X16 == Y16) {
        System.out.println("=");
      } else if (X16 < Y16) {
        System.out.println("<");
      } else {
        System.out.println(">");
      }

    }
  }
  ```
    