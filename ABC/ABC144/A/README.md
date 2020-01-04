### ABC144

# A - 9x9

  [問題はこちら](https://atcoder.jp/contests/abc144/tasks/abc144_a)


- 発想<br>
  A か B が10以上の場合は -1、それ以外の場合は A * B する。 <br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int A, B;
    cin >> A >> B;

    if (A < 10 && B < 10) {
      cout << A * B << endl;
    } else {
      cout << "-1" << endl;
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int A = sc.nextInt();
      int B = sc.nextInt();
      sc.close();

      if (A < 10 && B < 10) {
        System.out.println(A * B);
      } else {
        System.out.println("-1");
      }

    }

  }
  ```
    