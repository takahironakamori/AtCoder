### ABC135

# A - Harmony

  [問題はこちら](https://atcoder.jp/contests/abc135/tasks/abc135_a)


- 発想<br>
  A + B が奇数の場合は、IMPOSSIBLE<br>
  偶数の場合で、(A + B) / 2 が回答となる。
  


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int A, B;
    cin >> A >> B;

    if ((A + B) % 2 == 0) {
      cout << (A + B) / 2 << endl;
    } else {
      cout << "IMPOSSIBLE" << endl;
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {

    public static void main (String[] args) {

      Scanner scanner = new Scanner(System.in);

      int A = scanner.nextInt();
      int B = scanner.nextInt();

      scanner.close();

      if((A + B) % 2 == 0){
        System.out.println((A + B) / 2 );
      }else {
        System.out.println("IMPOSSIBLE");
      }

    }

  }
  ```
    