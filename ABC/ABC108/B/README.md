### ABC108

# B - Ruined Square

  [問題はこちら](https://atcoder.jp/contests/abc108/tasks/abc108_b)


- 発想<br>
  y2 - y1 を dx とする。<br>
  x2 - x1 を dy とする。<br>
  x_3 = x2 - dx、<br>
  y_3 = y2 + dy、<br>
  x_4 = x1 - dx、<br>
  y_4 = y1 + dy、<br>
  となる。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;  

    int dx = y2 - y1;
    int dy = x2 - x1;

    cout << x2 - dx << " " << y2 + dy << " " << x1 - dx << " " << y1 + dy << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int x1 = sc.nextInt();
      int y1 = sc.nextInt();
      int x2 = sc.nextInt();
      int y2 = sc.nextInt();

      sc.close();

      int dx = 0;
      int dy = 0;

      if (x2 == x1){
        dx = y2 - y1;
        dy = y2 - y1;
        System.out.println((x2 - dx) + " " + y2 + " " + (x1 - dx) + " " + y1);
      } else if (y2 == y1){
        dx = x2 - x1;
        dy = x2 - x1;
        System.out.println(x2 + " " + (y2 + dy) + " " + x1 + " " + (y1 + dy));
      } else {
        dx = y2 - y1;
        dy = x2 - x1;
        System.out.println((x2 - dx) + " " + (y2 + dy) + " " + (x1 - dx) + " " + (y1 + dy));
      }

    }

  }
  ```
    