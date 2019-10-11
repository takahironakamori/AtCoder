### ABC130

# C - Rectangle Cutting

  [問題はこちら](https://atcoder.jp/contests/abc130/tasks/abc130_c)

- 発想
  
  (x, y) と長方形の中点を結ぶ直線で長方形を2つに分けると、面積が1/2ずつになるのが、面積の大きくない方の面積の最大値になるパターン。<br>
  また、(x, y) が長方形の中点と同じであれば、どの角度の直接でも面積が1/2ずつになるため、分割の方法は複数存在する。
  
- 実装のポイント
  
  計算過程で小数点となる箇所が多いので、型に注意する。<br>
  C++で小数点で表示する場合は、cout << fixed << setprecision(15); を使う。

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, M;
    cin >> N >> M;

    vector<int> a(N+1);

    for (int i = 0; i < M; i++) {
      int i_;
      cin >> i_;
      a[i_] = 1;
    }

    vector<long> dp(N+1);

    long mod = 1000000007;

    dp[N] = 1;

    for (int i = N - 1; 0 <= i; i--) {
      if (a[i] == 1) {
        dp[i] = 0;
      } else {
        if (i == N - 1) {
          dp[i] = dp[N];
        } else if (N < i + 2) {
          dp[i] = (dp[i + 1] + dp[N]) % mod;
        } else {
          dp[i] = (dp[i + 1] + dp[i+2]) % mod;
        }
      }
    }

    cout << dp[0] << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int N = sc.nextInt();
      int M = sc.nextInt();
      int[] a = new int[N+1];

      for (int i = 0; i < M; i++) {
        int m = sc.nextInt();
        a[m] = 1;
      }

      sc.close();

      long[] dp = new long[N+1];

      long mod = 1000000007;

      dp[N] = 1;

      for (int i = N-1; 0 <= i ; i--) {
        if (a[i] == 1){
          dp[i] = 0;
        } else {
          if (i == N - 1){
            dp[i] = dp[N];
          } else if (N < i+2){
            dp[i] = (dp[i+1] + dp[N]) % mod;
          }else {
            dp[i] = (dp[i+1] + dp[i+2]) % mod;
          }
        }
      }

      System.out.println(dp[0]);

    }

  }
  ```
    