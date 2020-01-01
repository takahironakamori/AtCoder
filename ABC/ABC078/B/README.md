### ABC078

# B - ISU

  [問題はこちら](https://atcoder.jp/contests/abc078/tasks/abc078_b)


- 発想<br>
  (X - Z) / (Y + Z) を出力する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int X, Y, Z;
    cin >> X >> Y >> Z;

    cout << (X - Z) / (Y + Z) << endl;

  }
  ```

- コード（Java）
  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int X = sc.nextInt();
      int Y = sc.nextInt();
      int Z = sc.nextInt();

      sc.close();

      System.out.println((X-Z)/(Y+Z));

    }

  }
  ```
    