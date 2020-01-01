### ABC086

# B - 1 21

  [問題はこちら](https://atcoder.jp/contests/abc086/tasks/abc086_b)

- 発想<br>
  b が 10 未満のときは、a × 10 + b、<br>
  b が 100 未満のときは、a × 100 + b、<br>
  b が 100 のときは、a × 1000 + b、<br>
  の値の平方根（切り上げ）を求める。<br>
  値の平方根 × 値の平方根が値と同じであれば、Yes を出力する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int a, b;
    cin >> a >> b;

    int v = 0;

    if (b < 10) {
      v = a * 10 + b;
    } else if (b != 100) {
      v = a * 100 + b;
    } else {
      v = a * 1000 + b;
    }

    int v2 = sqrt(v);

    if (v2 * v2 == v) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      String a = sc.next();
      String b = sc.next();

      sc.close();

      int ab = Integer.valueOf(a + b);

      String result = "No";

      int c = 1;
      int d = 1;

      while (d <= ab) {
        if (d == ab){
          result = "Yes";
          break;
        }
        c++;
        d = c * c;
      }

      System.out.println(result);

    }

  }
  ```
    