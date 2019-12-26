### ABC117

# A - Entrance Examination

  [問題はこちら](https://atcoder.jp/contests/abc117/tasks/abc117_a)

- 発想<br>
  T / X を出力する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int T, X;
    cin >> T >> X;

    double ans = (double) T / X;

    printf("%.16f", ans);
    printf("\n");

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      double T = sc.nextInt();
      double X = sc.nextInt();

      System.out.println(T / X);

    }
  }
  ```
    