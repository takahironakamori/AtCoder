# ABC093 B - Small and Large Integers

  [問題はこちら](https://atcoder.jp/contests/abc093/tasks/abc093_b)

- 発想

  以下を満たす整数を出力します。
  
  「A以上(A+K)未満である」または「(B-K)超B以下である」

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int A, B, K;

    cin >> A >> B >> K;

    for (int i = A; i <= B; i++) {
      if (i < (A + K) || (B - K) < i) {
        cout << i << endl;
      }
    }

  }
  ```

- コード（Java）
  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int A = sc.nextInt();
      int B = sc.nextInt();
      int K = sc.nextInt();

      sc.close();

      for (int i = A; i <= B; i++) {

        if (i < (A + K) || (B - K) < i) {
          System.out.println(i);
        }

      }

    }

  }
  ```
    