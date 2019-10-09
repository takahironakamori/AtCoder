### ABC041

# B - 直方体

  [問題はこちら](https://atcoder.jp/contests/abc041/tasks/abc041_b)

- 発想<br>
  単純に掛け算して割り算する。<br>
  
  
- 実装のポイント<br>
  A, B, C のいずれも上限が大きい（10の19乗）ので、long 型を使う。<br>
  A * B * C は最大で 10 の 27 乗になるが、long long 型でも値の上限が、9 * 10 の 18乗 になるので、<br>
  (A * B) % M = {(A % M) * (B % M)} % M<br>
  という剰余の性質を利用すると計算できる。<br>
  
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    long A, B, C;
    cin >> A >> B >> C;

    long mod = 1000000000 + 7;

    cout << ((A * B) % mod) * C % mod << endl;

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

      sc.close();

      long mod = 1000000007;

      long s = (A * B) % mod;

      s = (s * C) % mod;

      System.out.println(s);

    }

  }
  ```
    