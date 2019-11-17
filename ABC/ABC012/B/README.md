### ABC012

# B - 入浴時間

  [問題はこちら](https://atcoder.jp/contests/abc012/tasks/abc012_2)

- 発想<br>
  N / 3600 で時間を得る。<br>
  (N % 3600) / 60 で分を得る。<br>
  N / 60 で秒を得る。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    int h = N / 3600;
    N %= 3600;

    int m = N / 60;
    N %= 60;

    printf("%02d", h);
    printf(":");
    printf("%02d", m);
    printf(":");
    printf("%02d", N);
    printf("\n");

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int sec = sc.nextInt();

      int hour = sec / 3600;
      int min = (sec % 3600) / 60;
      sec = sec % 60;

      System.out.println(String.format("%02d", hour) + ":" + String.format("%02d", min) + ":" + String.format("%02d", sec));

    }
  }
  ```
    