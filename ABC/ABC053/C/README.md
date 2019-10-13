### ABC053

# C - X: Yet Another Die Game

  [問題はこちら](https://atcoder.jp/contests/abc053/tasks/arc068_a)

- 発想
  
  少ない回数で最も多く得点を得る方法は、6 → 5 → 6 → 5 と繰り返す方法である。 <br>
  あまりも考慮する必要があるので、以下の手順で計算する。
  
  1.x ÷ 11 の商を2倍した数値を得る<br>
  2.x ÷ 11 のあまりを得る<br>
  3.あまりが0なら商が答え。1〜6の場合が商に1加え数が答え。7以上の場合は商に2加えた数が答え。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    long x;
    cin >> x;

    long count = 2 * (x / 11);

    long mod = x % 11;

    if (0 < mod && mod < 7){
      count += 1;
    } else if (6 < mod) {
      count += 2;
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

      long x = sc.nextLong();

      sc.close();

      long count = x / 11 * 2;

      long mod = x % 11;

      if (0 < mod && mod <= 6) {
        count++;
      } else if (mod != 0) {
        count += 2;
      }

      System.out.println(count);

    }

  }

  ```
    