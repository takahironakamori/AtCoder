### ABC118

# A - B +/- A

  [問題はこちら](https://atcoder.jp/contests/abc118/tasks/abc118_a)

- 発想<br>
  A が B で割り切れれば、A + B <br>
  そうでなければ、B - A を出力する。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int A, B;
    cin >> A >> B;

    if (B % A == 0) {
      cout << A + B << endl;
    } else {
      cout << B - A << endl;
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

      if ((B % A) == 0) {
        System.out.println(A + B);
      } else {
        System.out.println(B - A);
      }

    }
  }
  ```
    