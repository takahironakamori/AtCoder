### ABC024

# A - 動物園

  [問題はこちら](https://atcoder.jp/contests/abc024/tasks/abc024_a)

- 発想<br>
  A_1 から A_N まで順番に調べていく。<br>
  A_i と A_{i-1} の差が T より小さい場合は、A_i と A_{i-1} の差だけ空いている。<br>
  A_i と A_{i-1} の差が T 以上場合は、T だけ空いている。<br>
  
- 実装のポイント<bt>
  ルールが終わったら、最後に A_N の分 T を加える。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int A, B, C, K, S, T;
    cin >> A >> B >> C >> K >> S >> T;

    int answer = S * A + T * B;

    if (K <= S + T) {
      answer -= (S + T) * C;
    }

    cout << answer << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int A = sc.nextInt();
      int B = sc.nextInt();
      int C = sc.nextInt();
      int K = sc.nextInt();
      int S = sc.nextInt();
      int T = sc.nextInt();
      int discount = 0;

      if (K <= (S+T)) {
        discount = (S + T) * C;
      }

      System.out.println(S * A + T * B - discount);

    }
  }
  ```
    