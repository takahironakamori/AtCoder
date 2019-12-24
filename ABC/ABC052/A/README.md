### ABC052

# A - Two Rectangles

  [問題はこちら](https://atcoder.jp/contests/abc052/tasks/abc052_a)

- 発想<br>
  A * B と C * D を比較して大きい方を出力する。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int A, B, C, D;
    cin >> A >> B >> C >> D;

    if (C * D < A * B) {
      cout << A * B << endl;
    } else {
      cout << C * D << endl;
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int A = sc.nextInt();
      int B = sc.nextInt();
      int C = sc.nextInt();
      int D = sc.nextInt();

      if ((A * B) < (C * D)) {
        System.out.println(C * D);
      } else {
        System.out.println(A * B);
      }

    }
  }
  ```
    