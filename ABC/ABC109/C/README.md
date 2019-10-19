### ABC107

# C - Skip

  [問題はこちら](https://atcoder.jp/contests/abc109/tasks/abc109_c)

- 発想<br>
  D が 全ての |X - x_i| の約数であれば全ての都市にたどり着けるいい。<br>
  したがって、全ての |X - x_i| の最大公約数を出せばいい。
  

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

  int main() {

    int N, X;
    cin >> N >> X;

    vector<int> x(N);
    for (int i = 0; i < N; i++) {
      cin >> x[i];
    }

    int g = abs(x[0] - X);

    for (int i = 1; i < N; i++) {
      g = gcd(g, abs(x[i] - X));
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
      int X = sc.nextInt();

      int[] x = new int[N];

      for (int i = 0; i < N; i++) {
        x[i] = sc.nextInt();
      }

      sc.close();

      long g = Math.abs(x[0] - X);

      for (int i = 1; i < N; i++) {
         g = gcd(g, Math.abs(x[i] - X));
      }

      System.out.println(g);

    }

    public static long gcd(long x, long y){

      if (x < y) {
        long t = x;
        x = y;
        y = t;
      }

      while (y > 0) {
        long r = x % y;
        x = y;
        y = r;
      }

      return x;

    }

  }
  ```
    