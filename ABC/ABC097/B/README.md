### ABC097

# B - Exponential

  [問題はこちら](https://atcoder.jp/contests/abc097/tasks/abc097_b)


- 発想<br>
  考えられるすべての数値（x の y 乗）を試す。<br>
  x は 2 以上 X 以下でいい。<br>
  y も x の y 乗が X 以下になる場合に限るため、全探索しても計算量は間に合う。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int X;
    cin >> X;

    int answer = 1;

    for (int i = 2; i <= X; i++) {

      bool flg = true;
      int count = 2;

      while (flg) {
        if (pow(i, count) <= X) {
          answer = max(answer, (int) pow(i,count));
        } else {
          flg = false;
        }
        count++;
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

      int X = sc.nextInt();

      sc.close();

      int max = 1;

      for (int i = 1; i < X; i++) {

        for (int j = 2; j < X; j++) {
          double k = Math.pow(i, j);
          if ((int)k <= X) {
            max = Math.max(max, (int)k);
          } else {
            break;
          }
        }

      }

      System.out.println(max);

    }

  }
  ```
    