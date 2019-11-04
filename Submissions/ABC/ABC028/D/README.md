### ABC028

# D - 乱数生成

  [問題はこちら](https://atcoder.jp/contests/abc028/tasks/abc028_d)

- 発想
  
  中央値が K になるような出力の通り数を N^3 で割ればいい。
  
  中央値が K になるような出力の通り数は何回 K が出力されたかで場合分けして数える<br>
  
  1.K が 0 回出力 -> 中央値が K にならない = 0 回
  
  2.K が 1 回出力 -> 残り 2 つのうち、 1 つは K より大きく、もう 1 つは K より小さければいい。<br>
  K より大きい数の個数を B とすると、B = N - K 個<br>
  K より小さい数の個数を S とすると、S = K - 1 個<br>
  K, B, S が出力される組み合わせは、3! = 6 通り<br>
  以上より、<br>
  中央値が K になるのは、(N - K) * (K - 1) * 6 回となる。
  
  3.K が 2 回出力 -> 残り 1 つの数値がどんな数値でも中央値は K になる。<br>
  K でない数の個数を R とすると R = N - 1 個<br>
  K, K, R が出力される組み合わせは、(K, K, R) (K, R, K) (R, K, K) の3通り<br>
  以上より、<br>
  中央値が K になるのは、(N - 1) * 3 回となる。
  
  K が 3 回出力 -> 1通りしかない = 1 回<br>
  
  上記、1., 2., 3.より、<br>
  中央値が K になるような出力の通り数は、<br>
  (N - K) * (K - 1) * 6 + (N - 1) * 3 + 1<br>
  これを N^3 で割った数が回答となる。
  
- 実装のポイント

  N と K の型を long にする。<br>
  計算過程で int でまかないきれない数値になる場合もあるので注意
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    long N, K;
    cin >> N >> K;

    long count = (N - K) * (K - 1) * 6.0 + (N - 1) * 3.0 + 1;

    double all = pow(N, 3.0);

    double ans = double(count) / all;

    cout << setprecision(11) << ans << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      long N = sc.nextLong();
      long K = sc.nextLong();

      sc.close();

      long count = (N - K) * (K - 1) * 6 + (N - 1) * 3 + 1;

      double all = Math.pow(N, 3);

      double ans = (double)count / all;

      System.out.println(ans);

    }

  }
  ```
    