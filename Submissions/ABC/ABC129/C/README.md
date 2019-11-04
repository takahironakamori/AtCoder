### ABC129

# C - Typical Stairs

  [問題はこちら](https://atcoder.jp/contests/abc129/tasks/abc129_c)

- 発想<br>  
  DP。<br>
  後ろから考える。<br>
  入力例１で考えると、<br>
  6 の位置から N の 6 へ行く移動方法は 1 通り。<br>
  5 の位置から N の 6 へ行く移動方法は 1 通り。<br>
  4 の位置から N の 6 へ行く移動方法は 5 と 6 での移動方法数の和、1 + 1 = 2 通り。<br>
  3 の位置は壊れているので、0 とする。<br>
  2 の位置から N の 6 へ行く移動方法は 3 と 4 での移動方法数の和、0 + 2 = 2 通り。<br>
  1 の位置から N の 6 へ行く移動方法は 2 と 3 での移動方法数の和、2 + 0 = 2 通り。<br>
  0 の位置から N の 6 へ行く移動方法は 1 と 2 での移動方法数の和、2 + 2 = 4 通り。<br>
  答えは 4 通りとなる。

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
    