### ABC092

# A - Traveling Budget

  [問題はこちら](https://atcoder.jp/contests/abc092/tasks/abc092_a)


- 発想<br>
  A と B で小さい方と、<br>
  C と D で小さい方の合計を出力する。
  
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int A, B, C, D;
    cin >> A >> B >> C >> D;

    cout << min(A, B) + min(C, D) << endl;

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
      int D = sc.nextInt();
      int sum = 0;

      if (A < B) {
        sum = A;
      } else {
        sum = B;
      }

      if (C < D) {
        sum = sum + C;
      } else {
        sum = sum + D;
      }

      System.out.println(sum);

    }
  }
  ```
    