### ABC130

# A - Rounding

  [問題はこちら](https://atcoder.jp/contests/abc130/tasks/abc130_a)


- 発想<br>
  X と A を比較する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int X, A;
    cin >> X >> A;

    if (X < A) {
      cout << 0 << endl;
    } else {
      cout << 10 << endl;
    }

  }
  ```

- コード（Java）
  ```java
  import java.util.*;
  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int X = sc.nextInt();
      int A = sc.nextInt();
      sc.close();

      if(X < A){
        System.out.println(0);
      } else {
        System.out.println(10);
      }

    }

  }
  ```
    