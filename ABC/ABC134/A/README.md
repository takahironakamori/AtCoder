### ABC134

# A - Dodecagon

  [問題はこちら](https://atcoder.jp/contests/abc134/tasks/abc134_a)


- 発想<br>
  r * r * 3 を出力する。<br>
  


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int r;
    cin >> r;

    cout << r * r * 3 << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int r = sc.nextInt();
      sc.close();

      System.out.println(3 * r * r);

    }

  }
  ```
    