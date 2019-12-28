### ABC034

# B - ペア

  [問題はこちら](https://atcoder.jp/contests/abc034/tasks/abc034_b)


- 発想<br>
  n が奇数の場合は、n + 1 を<br>
  n が偶数の場合は、n - 1 を出力する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    if (n % 2 == 0) {
      cout << n - 1 << endl;
    } else {
      cout << n + 1 << endl;
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int n = sc.nextInt();

      sc.close();

      if (n % 2 == 0) {
        System.out.println(n - 1);
      } else {
        System.out.println(n + 1);
      }

    }

  }
  ```
    