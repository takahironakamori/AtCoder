### ABC024

# A - 動物園

  [問題はこちら](https://atcoder.jp/contests/abc024/tasks/abc024_a)


- 発想<br>
  S * A で子供の料金、T * B で大人の料金を計算する。<br>
  K <= S + T ならば、料金から（S + T）* C を引く。
  

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
    