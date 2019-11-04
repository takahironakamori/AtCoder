### ABC085

# C - Otoshidama

  [問題はこちら](https://atcoder.jp/contests/abc085/tasks/abc085_c)

- 発想<br>
  a_1 から a_N のうち最も大きいものを a_max とする。<br>
  b_1 から b_N うち値が a_max 以上の場合、H からその値を引き、その回数を数えておく。<br>
  H が 0 を超える場合は、残りの H を a_max で割った（切り上げ）値を回数に加えたものが回答となる。
 
 
- 実装のポイント<br>
　a については、最大値のみ使うので、わざわざ配列にする必要はない。
 

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, Y;
    cin >> N >> Y;

    string result = "-1 -1 -1";

    for (int i = 0; i <= N; i++) {

      for (int j = 0; j <= N - i; j++) {

        int k = N - i - j;
        int sum = i * 10000 + j * 5000 + k * 1000;
        if (sum == Y) {
          result = to_string(i) + " " + to_string(j) + " " + to_string(k);
          break;
        }

      }

    }

    cout << result << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

       Scanner sc = new Scanner(System.in);

      int N = sc.nextInt();
      int Y = sc.nextInt();

      sc.close();

      String result = "-1 -1 -1";

       for (int i = 0; i <= N; i++) {

        for (int j = 0; j <= N - i; j++) {

          int k = N - i - j;
          int sum = i * 10000 + j * 5000 + k * 1000;
          if (sum == Y) {
            result = i + " " + j + " " + k;
            break;
          }

        }

      }

      System.out.println(result);

    }

  }
  ```
    