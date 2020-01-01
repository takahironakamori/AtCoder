### ABC087

# B - Coins

  [問題はこちら](https://atcoder.jp/contests/abc087/tasks/abc087_b)


- 発想<br>
  全パターン試す。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int A, B, C, X;
    cin >> A >> B >> C >> X;

    int answer = 0;

    for (int i = 0; i <= A; i++) {
      for (int j = 0; j <= B; j++) {
        for (int k = 0; k <= C; k++) {
          int sum = 500 * i + 100 * j + 50 * k;
          if (sum == X) {
            answer++;
          }
        }
      }
    }

    cout << answer << endl;

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
      int C = sc.nextInt();
      int X = sc.nextInt();

      sc.close();

      int count = 0;

      for (int i = 0; i <= A; i++) {
        for (int j = 0; j <= B; j++) {
          for (int k = 0; k <= C; k++) {
            if (i * 500 + j * 100 + k * 50 == X) {
              count++;
            }
          }
        }
      }

      System.out.println(count);

    }

  }
  ```
    