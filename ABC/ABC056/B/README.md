### ABC056

# B - NarrowRectanglesEasy

  [問題はこちら](https://atcoder.jp/contests/abc056/tasks/abc056_b)


- 発想<br>
  a < b なら、 b - (a + W) を出力する。<br>  
  それ以外の場合は、 a - (b + W) を出力する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int W, a, b;
    cin >> W >> a >> b;

    int answer = 0;

    if (b < a) {
      swap(a, b);
    }

    if (W + a < b) {
      answer = b - (W + a);
    }

    cout << answer << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int W = sc.nextInt();
      int a = sc.nextInt();
      int b = sc.nextInt();

      sc.close();

      int d = 0;

      if (a < b) {
        d = b - (a + W);      
      } else {
        d = a - (b + W); 
      }

      if (0 < d) {
        System.out.println(d);
      } else {
        System.out.println(0);
      }

    }

  }
  ```
    