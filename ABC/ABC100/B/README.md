### ABC100

# B - Ringo's Favorite Numbers

  [問題はこちら](https://atcoder.jp/contests/abc100/tasks/abc100_b)

- 発想
  
  100 でちょうど D 回割り切れる数を a とすると、a = 100^Dになる。<br>
  a を小さい順から並べるとa, 2a, 3a,...と考えることができる。<br>
  N は 100 以下なので、a を小さい順から、100 個考えると、a, 2a, ....99a, 101aとなる。<br>
  100 個目のときだけ 101a となるのに注意する。
  
- 実装のポイント

  10の2乗の場合は、pow(10,2) と書く。<br>
  C++、Javaともに pow()は double型になるので、intでキャストする。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int D, N;
    cin >> D >> N;

    if (N != 100) {
      cout << (int) pow(100, D) * N << endl;
    } else {
      cout << (int) pow(100, D) * (N + 1) << endl;
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int D = sc.nextInt();
      int N = sc.nextInt();

      sc.close();

      if (N != 100) {
        System.out.println(N * (int)Math.pow(100,D));
      } else {
        System.out.println((N + 1) * (int)Math.pow(100,D));
      }

    }

  }
  ```
    