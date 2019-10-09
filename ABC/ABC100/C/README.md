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

    int N;
    cin >> N;

    int count = 0;

    for (int i = 0; i < N; i++) {
      int a;
      cin >> a;
      int count_ = 0;
      while (a % 2 == 0) {
        a /= 2;
        count_++;
      }
      count += count_;
    }

    cout << count << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int N = sc.nextInt();
      int count = 0;

      for (int i = 0; i < N; i++) {
        int a = sc.nextInt();
        int count_ = 0;
        while (a % 2 == 0) {
          a /= 2;
          count_++;
        }
        count += count_;
      }

      sc.close(); 

      System.out.println(count);

    }

  }
  ```
    