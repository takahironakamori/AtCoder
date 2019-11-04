### ABC126

# C - Dice and Coin

  [問題はこちら](https://atcoder.jp/contests/abc126/tasks/abc126_c)

- 発想<br>
  1 から N について、得点が K を超えるまでに必要なサイコロを振る回数を t とする。<br>
  i を 1 から N とすると、1 / i * 0. 5 の t 乗が i の時の確率になる。<br>
  この確率を 1 から N まで足していく。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, K;
    cin >> N >> K;

    double answer = 0.0;

    for (int i = 1; i <= N; i++) {
      int v = i;
      int count = 0;
      while (v < K) {
        v *= 2;
        count++;
      }
      answer += pow(0.5, count) / N;
    }

    cout << setprecision(15) << answer << endl;

  }
  ```

- コード（Java）
  ```java
  import java.util.*;
  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int N = sc.nextInt();
      double K = sc.nextDouble();

      sc.close();

      double answer = 0.0;

      for (int i = 1; i <= N; i++) {

        double count = i;
        double j = 0;

        while (count < K) {
          count = count * 2;
          j++;
        }

        answer += Math.pow(0.5,j) / N;

      }

      System.out.println(answer);

    }

  }
  ```
    