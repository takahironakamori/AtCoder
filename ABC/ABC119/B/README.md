### ABC119

# B - Digital Gifts

  [問題はこちら](https://atcoder.jp/contests/abc119/tasks/abc119_b)


- 発想<br>
  u が BTC の場合は x * 380000 を、<br>
  u が JPY の場合は、x を 足していく。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    double answer = 0.0;

    for (int i = 0; i < N; i++) {
      double x;
      cin >> x;
      string u;
      cin >> u;
      if (u == "BTC") {
        answer += (double) 380000 * x;
      } else {
        answer += (double) x;
      }
    }

    cout << setprecision(20) << answer << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int N = sc.nextInt();
      double[] x = new double[N];
      String[] u = new String[N];

      for (int i = 0; i < N; i++) {
        x[i] = sc.nextDouble();
        u[i] = sc.next();
      }

      sc.close();

      double sum = 0.0;

      for (int i = 0; i < N; i++) {
        if (u[i].equals("JPY")) {
          sum += x[i];
        } else {
          sum += x[i] * 380000;
        }
      }

      System.out.println(sum);

    }

  }
  ```
    