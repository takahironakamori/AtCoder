### ABC128

# A - Apple Pie

  [問題はこちら](https://atcoder.jp/contests/abc128/tasks/abc128_a)

- 発想<br>
  (A * 3 + P) / 2 を出力する。<br>
  
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int A, P;
    cin >> A >> P;

    cout << (A * 3 + P) / 2 << endl;

  }
  ```

- コード（Java）
  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int A = sc.nextInt();
      int P = sc.nextInt();

      sc.close();

      System.out.println((A * 3 + P) / 2);

    }

  }
  ```
    