### ABC111

# B - AtCoder Beginner Contest 111

  [問題はこちら](https://atcoder.jp/contests/abc111/tasks/abc111_b)


- 発想<br>
  分岐を繰り返す方法（C++のコード）と、<br>
  N について、111、222 ... 999 を順番に調べて、N が初めて超えた時点が回答となる（Javaのコード）
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    int answer = 111;

    if (100 <= N && N <= 111) {
      answer = 111;
    } else if (112 <= N && N <= 222) {
      answer = 222;
    } else if (223 <= N && N <= 333) {
      answer = 333;
    } else if (334 <= N && N <= 444) {
      answer = 444;
    } else if (445 <= N && N <= 555) {
      answer = 555;
    } else if (556 <= N && N <= 666) {
      answer = 666;
    } else if (667 <= N && N <= 777) {
      answer = 777;
    } else if (778 <= N && N <= 888) {
      answer = 888;
    } else {
      answer = 999;
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

      int N = sc.nextInt();

      sc.close();

      for (int i = 1; i <= 9; i++) {
        int j = i * 100 + i * 10 + i;
        if (N <= j) {
          System.out.println(j);
          break;
        }
      }

    }

  }
  ```
    