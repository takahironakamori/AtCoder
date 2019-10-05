### ABC095

# C - Half and Half

  [問題はこちら](https://atcoder.jp/contests/abc095/tasks/arc096_a)

- 発想

  Aピザの価格とBピザの価格の合計が、ABピザの価格の 2 倍より小さい場合は、AピザとBピザを個別に買った方が安くなる。<br>
  Aピザの価格とBピザの価格の合計が、ABピザの価格の 2 倍より大きい場合は、ABピザを買えるだけ買った方がいい。<br>
  ABピザを買いきった後、X > Y のとき、X - Y 個をABピザの価格の2倍が、Aピザの価格より大きい場合は、Aピザで買い、小さい場合はABピザを2枚買う。<br>
  ABピザを買いきった後、Y > X のとき、Y - X 個をABピザの価格の2倍が、Bピザの価格より大きい場合は、Bピザで買い、小さい場合はABピザを2枚買う。

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
    