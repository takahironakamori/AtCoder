### ABC124

# A - Buttons

  [問題はこちら](https://atcoder.jp/contests/abc124/tasks/abc124_a)


- 発想<br>
  A == B ならば A + B<br>
  A < B ならば B + B - 1<br>
  A > B ならば A + A - 1
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int A, B;
    cin >> A >> B;

    if (A == B) {
      cout << A + B << endl;
    } else if (A < B) {
      cout << B + B - 1 << endl;
    } else {
      cout << A + A - 1 << endl;
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

      if (A < B) {
        if (A < (B - 1)) {
          System.out.println(B + (B - 1));
        } else {
          System.out.println(A + B);
        }
      } else {
        if (B < (A - 1)) {
          System.out.println(A + (A - 1));
        } else {
          System.out.println(A + B);
        }
      }

    }
  }
  ```
    