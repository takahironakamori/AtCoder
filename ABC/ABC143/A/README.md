### ABC143

# A - Curtain

  [問題はこちら](https://atcoder.jp/contests/abc143/tasks/abc143_a)


- 発想<br>
  A が B の2倍より小さい場合は 0 を、大きい場合は A - (B の 2倍) を出力する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int A, B;
    cin >> A >> B;

    if (A <= B * 2) {
      cout << 0 << endl;
    } else {
      cout << A - (B * 2) << endl;
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

      if (A <= B * 2) {
        System.out.println(0);
      } else {
        System.out.println(A - (B * 2));
      }

    }

  }
  ```
    