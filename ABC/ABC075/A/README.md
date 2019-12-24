### ABC075

# A - One out of Three

  [問題はこちら](https://atcoder.jp/contests/abc075/tasks/abc075_a)

- 発想<br>
  A と B が同じ -> C を出力<br>
  A と C が同じ -> B を出力<br>
  B と C が同じ -> A を出力<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int A, B, C;
    cin >> A >> B >> C;

    if (A == B) {
      cout << C << endl;
    } else if (B == C) {
      cout << A << endl;
    } else {
      cout << B << endl;
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

      if (A == B) {
        System.out.println(C);
      } else if (A == C) {
        System.out.println(B);
      } else {
        System.out.println(A);
      }

    }
  }
  ```
    