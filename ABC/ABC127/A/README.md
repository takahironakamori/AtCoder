### ABC127

# A - Ferris Wheel

  [問題はこちら](https://atcoder.jp/contests/abc127/tasks/abc127_a)

- 発想<br>
  A が 5 以下の場合は 0 <br>
  A が 6 以上 12 以下の場合は B / 2 <br>
  それ以外は、B を出力する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int A, B;
    cin >> A >> B;

    if (A <= 5) {
      cout << 0 << endl;
    } else if (A <= 12) {
      cout << B / 2 << endl;
    } else {
      cout << B << endl;
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

      if (A <= 5) {
        System.out.println(0);
      } else if (A <= 12) {
        System.out.println(B/2);
      } else {
        System.out.println(B);
      }

    }

  }
  ```
    