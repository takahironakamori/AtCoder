### ABC048

# B - Between a and b ...

  [問題はこちら](https://atcoder.jp/contests/abc048/tasks/abc048_b)

- 発想
  
  a のうち、x で割り切れるものの個数は、 a / x で、<br>
  b のうち、x で割り切れるものの個数は、 b / x で計算できる。
  
  a が x で割り切れる場合は、<br>
  b - a - 1 で、<br>
  a が x で割り切れない場合は、<br>
  b - a - 1 で求めることができる。<br>

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    long a, b, x;
    cin >> a >> b >> x;

    long a_ = a / x;

    if (a % x == 0) {
      a_--;
    }

    long b_ = b / x;

    cout << b_ - a_ << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      long a = sc.nextLong();
      long b = sc.nextLong();
      long x = sc.nextLong();

      sc.close();

      long a_ = a/x;

      if (a%x == 0) {
        a_--;
      }

      long b_ = b/x;

      System.out.println(b_ - a_);

    }

  }
  ```
    