### ABC011

# C - 123引き算

  [問題はこちら](https://atcoder.jp/contests/abc011/tasks/abc011_3)

- 発想<br>
  DP。<br>
  dp用の配列を用意し、大きな値で初期化。<br>
  dp[i] は、N が i になるまでの処理の回数が入る。<br>
  dpの要素数もN+10くらいにしておく。<br>
  dp[N] を 0 にする。<br>
  dp[i] が、NG1、NG2、NG3 に該当する場合は、i を次の値にする。<br>
  dp[i] は dp[i+1]+1、dp[i+2]+1、dp[i+3]+1 で最も小さい値を選択する。<br>
  dp[0] まで確認して、dp[0] が100以下なら YES を、100 を超える場合は NO を出力する。

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    vector<int> NG(301);
    for (int i = 0; i < 3; i++) {
      int v;
      cin >> v;
      NG[v] = 1;
    }

    vector<int> dp(N + 10);

    fill(dp.begin(), dp.end(), 10000000);

    if (NG[N] != 1) {
      dp[N] = 0;
    }

    for (int i = N - 1; 0 <= i; i--) {

      if (NG[i] == 1) {
        continue;
      }

      dp[i] = min(dp[i+3]+1, min(dp[i+2]+1, dp[i+1]+1));

    }

    if (dp[0] <= 100) {
      cout << "YES" << endl;
    } else{
      cout << "NO" << endl;
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int N = sc.nextInt();
      int[] NG = new int[301];

      for (int i = 0; i < 3; i++) {
        int ng_ = sc.nextInt();
        NG[ng_] = 1;
      }

      sc.close();

      int[] dp = new int[N+10];

      Arrays.fill(dp, 10000000);

      if (NG[N] != 1) {
        dp[N] = 0;
      }

      for (int i = N-1; 0 <= i; i--) {

        if (NG[i] == 1){
          continue;
        }

        dp[i] = Math.min(dp[i+1]+1, Math.min(dp[i+2]+1, dp[i+3]+1));

      }

      if (dp[0] <= 100) {
        System.out.println("YES");
      } else {
        System.out.println("NO");
      }

    }

  }
  ```
    