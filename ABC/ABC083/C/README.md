### ABC083

# C - Multiple Gift

  [問題はこちら](https://atcoder.jp/contests/abc083/tasks/arc088_a)

- 発想<br>
  Y を超えるまで X *= 2 ができる回数を数える。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    long X, Y;
    cin >> X >> Y;

    long answer = 0;
    long v = X;

    while (v <= Y) {
      v *= 2;
      answer++;
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

      long X = sc.nextLong();
      long Y = sc.nextLong();

      sc.close();

      long count = 0;
      long value = X;

      while (value <= Y) {
        value = value * 2;
        count++;
      }

      System.out.println(count);

    }

  }
  ```
    