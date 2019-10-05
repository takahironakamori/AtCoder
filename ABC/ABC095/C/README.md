### ABC095

# C - Half and Half

  [問題はこちら](https://atcoder.jp/contests/abc095/tasks/arc096_a)

- 発想

  以下を満たす整数を出力する。
  
  「A以上(A+K)未満である」または「(B-K)超B以下である」

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int A, B, C, X, Y;
    cin >> A >> B >> C >> X >> Y;

    long sum = 0;

    if ((C * 2) <= (A + B)) {
      if (X < Y) {
        sum += C * 2 * X;
        if (C * 2 < B) {
          sum += C * (Y - X) * 2;
        } else {
          sum += B * (Y - X);
        }
      } else {
        sum += C * 2 * Y;
        if (C * 2 < A) {
          sum += C * (X - Y) * 2;
        } else {
          sum += A * (X - Y);
        }
      }
    } else {
      sum += X * A;
      sum += Y * B;
    }

    cout << sum << endl;

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
      int C = sc.nextInt();
      int X = sc.nextInt();
      int Y = sc.nextInt();

      sc.close(); 

      long sum = 0;

      if ((C * 2) <= (A + B)) {
        if (X < Y) {
          sum += C * 2 * X;
          if (C * 2 < B) {
            sum += C * (Y - X) * 2;
          } else {
            sum += B * (Y - X);
          }
        } else {
          sum += C * 2 * Y;
          if (C * 2 < A) {
            sum += C * (X - Y) * 2;
          } else {
            sum += A * (X - Y);
          }
        }
      } else {
        sum += X * A;
        sum += Y * B;
      }

      System.out.println(sum);

    }

  }
  ```
    