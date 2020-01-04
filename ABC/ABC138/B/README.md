### ABC138

# B - Resistors in Parallel

  [問題はこちら](https://atcoder.jp/contests/abc138/tasks/abc138_b)


- 発想<br>
  A_1 から A_N まで　1 / A_i を足していき、さらに合計を 1 で割る。<br>


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    double answer = 0;

    for (int i = 0; i < N; i++) {
      int A;
      cin >> A;
      answer += (double) 1 / A;
    }

    cout << setprecision(11) <<(double) 1 / answer << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int N = sc.nextInt();
      int[] A = new int[N];

      for (int i = 0; i < N; i++) {
        A[i] = sc.nextInt();
      }

      sc.close();

      double result = 0.0;

      for (int i = 0; i < N; i++) {
        result +=  1 / (double) A[i];
      }

      System.out.println(1 / result);

    }

  }
  ```
    