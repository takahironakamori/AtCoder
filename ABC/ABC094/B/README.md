### ABC094

# B - Toll Gates

  [問題はこちら](https://atcoder.jp/contests/abc094/tasks/abc094_b)


- 発想<br>
  A が X 未満の個数と A が X を超える個数を数えて、<br>
  小さい方を出力する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, M, X;
    cin >> N >> M >> X;

    int cost1 = 0;
    int cost2 = 0;

    for (int i = 0; i < M; i++) {
      int A;
      cin >> A;
      if (A < X) {
        cost1++;
      } else {
        cost2++;
      }
    }

    cout << min(cost1, cost2) << endl;

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
      int X = sc.nextInt();

      int[] A = new int[N];

      for (int i = 0; i < M; i++) {
        A[i] = sc.nextInt();
      }

      sc.close();

      int count = 0;

      for (int i = 0; i < M; i++) {

        if (A[i] < X) {
          count++;
        }

      }

      if (count < M/2) {
        System.out.println(count);
      } else {
        System.out.println(M - count);
      }

    }

  }
  ```
    