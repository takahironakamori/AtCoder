### ABC070

# C - Multiple Clocks

  [問題はこちら](https://atcoder.jp/contests/abc070/tasks/abc070_c)

- 発想<br>
  T_1 から T_N までの最小公倍数を求めればいい。
  
- 実装のポイント<br>
  複数の値の最小公倍数は、ループで求めればいい。

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  long gcd(long a, long b) {

    if (b == 0) {
      return a;
    }

    return gcd(b, a % b);

  }

  long lcm(long a, long b) {

    return a / gcd(a, b) * b;

  }

  int main() {

    int N;
    cin >> N;

    vector<long> T(N);
    for (int i = 0; i < N; i++) {
      cin >> T[i];
    }

    long g = T[0];

    for (int i = 1; i < N; i++) {
      g = lcm(g, T[i]);
    }

    cout << g << endl;

  }
  ```

- コード（Java）
  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int N = sc.nextInt();
      long[] T = new long[N];

      for (int i = 0; i < N; i++) {
        T[i] = sc.nextLong();
      }

      sc.close();

      long result = T[0];

      for (int i = 1; i < N; i++) {
        result = lcm(result, T[i]);
      }

      System.out.println(result);

    }

    public static long gcd(long x, long y){

      if (y == 0) {
        return x;
      }

      return gcd(y, x % y);

    }

    public static long lcm(long x, long y) {

      return x / gcd(x, y) * y;

    }

  }
  ```
    