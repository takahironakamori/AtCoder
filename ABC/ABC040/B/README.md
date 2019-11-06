### ABC040

# B - □□□□□

  [問題はこちら](https://atcoder.jp/contests/abc040/tasks/abc040_b)

- 発想<br>
  1 から n まで順番に割り算して、縦と横の長さの差の絶対値と、余ったタイルの枚数の和の最小を探していく。<br>
  
  
- 実装のポイント<br>
  n の上限が 100000 なので、計算量は気にしないでいい。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    int ans = 999999;

    for (int i = 1; i <= n; i++) {
      int a1 = n / i;
      int a2 = n % i;
      ans = min(ans, abs(a1 - i) + a2);
    }

    cout << ans << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int n = sc.nextInt();

      sc.close();

      int min = Integer.MAX_VALUE;

      for (int i = 1; i < 1000; i++) {
        for (int j = 1; j < 1000; j++) {
          int r = n - i * j;
          if (0 <= r) {
            int result = r + Math.abs(i - j);
            min = Math.min(min, result);
          }
        }
      }

      System.out.println(min);

    }

  }
  ```
    