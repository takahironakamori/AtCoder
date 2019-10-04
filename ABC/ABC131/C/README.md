### ABC131

# C - Anti-Division

  [問題はこちら](https://atcoder.jp/contests/abc131/tasks/abc131_c)

- 発想<br>
  A以上B以下の数値の個数（すなわち B - A + 1 ）から A以上B以下の数値ので、C または D で割り切れる個数を引いた結果が回答である。<br>
  0 から A までの間の数値で C で割り切れる数を数える（すなわち、A / C を計算する。結果を A1 とする）。<br>
  0 から B までの間の数値で C で割り切れる数を数える（すなわち、B / C を計算する。結果を B1 とする）。<br>
  A1 が C で割り切れる場合は、B1 - A1 + 1 が A 以上 B以下の数値で C で割り切れる数である（結果と AB1 とする）。<br>
  0 から A までの間の数値で D で割り切れる数を数える（すなわち、A / D を計算する。結果を A2 とする）。<br>
  0 から B までの間の数値で D で割り切れる数を数える（すなわち、B / D を計算する。結果を B2 とする）。<br>
  A2 が D で割り切れる場合は、B2 - A2 + 1 が A 以上 B以下の数値で D で割り切れる数である（結果と AB2 とする）。<br>
  AB1 と AB2 を単純に足すと、C でも D でも割り切れる数が二重で計上されている。<br>
  C でも D でも割り切れる数は、 C と D の最小公倍数を使うを求めることができる。<br>
  C と D の最小公倍数を求める（LCMとする）。<br>
  0 から A までの間の数値で LCM で割り切れる数を数える（すなわち、A / LCM を計算する。結果を A3 とする）。<br>
  0 から B までの間の数値で LCM で割り切れる数を数える（すなわち、B / LCM を計算する。結果を B3 とする）。<br>
  A3 が LCM で割り切れる場合は、B3 - A3 + 1 が A 以上 B以下の数値で LCM で割り切れる数である（結果と AB3 とする）。<br>
  B - A + 1 - (AB1 + AB2 - AB3) を計算する。
  
   
- 実装のポイント
  
  計算過程で小数点となる箇所が多いので、型に注意する。<br>
  C++で小数点で表示する場合は、cout << fixed << setprecision(15); を使う。

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  long gcd(long a, long b) {

    if (b == 0) {
      return a;
    }

    return gcd(b, a % b);

  }

  long lcm(long a, long b) {

    return a / gcd(a, b) * b;

  }

  int main() {

    long A, B, C, D;
    cin >> A >> B >> C >> D;

    long lcm_ = lcm(C, D);

    long A1 = A / C;
    long B1 = B / C;
    long AB1 = B1 - A1;
    if (A % C == 0) {
      AB1++;
    }

    long A2 = A / D;
    long B2 = B / D;
    long AB2 = B2 - A2;
    if (A % D == 0) {
      AB2++;
    }

    long A3 = A / lcm_;
    long B3 = B / lcm_;
    long AB3 = B3 - A3;
    if (A % lcm_ == 0) {
      AB3++;
    }

    long AB = AB1 + AB2 - AB3;

    cout << B - A + 1 - AB << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      long A = sc.nextLong();
      long B = sc.nextLong();
      long C = sc.nextLong();
      long D = sc.nextLong();

      sc.close();

      long lcm_ = lcm(C, D);

      long A1 = A / C;
      long B1 = B / C;
      long AB1 = B1 - A1;
      if (A % C == 0) {
        AB1++;
      }

      long A2 = A / D;
      long B2 = B / D;
      long AB2 = B2 - A2;
      if (A % D == 0) {
        AB2++;
      }

      long A3 = A / lcm_;
      long B3 = B / lcm_;
      long AB3 = B3 - A3;
      if (A % lcm_ == 0) {
        AB3++;
      }

      long AB = AB1 + AB2 - AB3;

      System.out.println(B - A + 1 - AB);

    }

    public static long gcd(long x, long y){

      if (y == 0) {
        return x;
      }

      return gcd(y, x % y);

    }

    public static long lcm(long x, long y) {

      return x / gcd(x, y) * y;

    }

  }
  ```
    