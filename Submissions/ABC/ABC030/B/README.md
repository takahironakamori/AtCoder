### ABC030

# B - 時計盤

  [問題はこちら](https://atcoder.jp/contests/abc030/tasks/abc030_b)

- 発想
  
  時間が24時間表記なので、12時間表記に変えた方が計算しやすい。<br>
  長針は1分で6度進む。<br>
  短針は1時間で30度、1分で0.5度進む。<br>
  長針と短針の絶対値を求める。<br>
  絶対値が180度以下の場合は、その絶対値が回答。<br>
  絶対値が180度より大きい場合は、360から絶対値を引いた結果が回答。

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    double n, m;
    cin >> n >> m;

    if (12 <= n) {
      n = n - 12;
    }

    n = n * 30 + m * 0.5;
    m = m * 6;

    double res = abs(n - m);

    if (180 < res) {
      res = 360 - res;
    }

    cout << res << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int n = sc.nextInt();
      int m = sc.nextInt();

      sc.close();

      if (12 <= n) {
        n = n - 12;
      }

      double H = n * 30 + m * 0.5;
      double M = m * 6;

      double res = Math.abs(H - M);

      if (180 < res) {
        res = 360 - res;
      }

      System.out.println(res);

    }

  }
  ```
    