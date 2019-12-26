### ABC125

# A - Biscuit Generator

  [問題はこちら](https://atcoder.jp/contests/abc125/tasks/abc125_a)

- 発想<br>
  T / A * B を出力する<br>


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int A, B, T;
    cin >> A >> B >> T;

    cout << T / A * B << endl;

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
      int T = sc.nextInt();

      sc.close();

      int a = T / A;

      System.out.println(a * B);

    }

  }
  ```
    