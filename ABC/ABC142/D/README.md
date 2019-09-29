### ABC142

# D - Disjoint Set of Common Divisors

  [問題はこちら](https://atcoder.jp/contests/abc142/tasks/abc142_d)

- 発想

  A と B の最大公約数を求める。<br>
  最大公約数の約数は A と B の約数でもある。<br>
  最大公約数の約数のうち、素数の個数が出力すべき回答となる。<br>
  素数の個数は素因数分解をすることで得ることができる。

- 実装のポイント

  素因数分解の計算量に注意する。
  

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

  map<long, long> prime_factor(long N) {
    map<long, long> res;
    for (long i = 2; i * i <= N; i++) {
      while (N % i == 0) {
        res[i]++;
        N /= i;
      }
    }
    if (N != 1) {
      res[N] = 1;
    }
    return res;
  }

  int main() {

    long A, B;
    cin >> A >> B;

    long g = gcd(A, B);

    map<long, long> m = prime_factor(g);

    cout << m.size() + 1 << endl;

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
      sc.close();

      long g = gcd(A, B);

      HashMap<Long, Long> m = prime_factor(g);

      System.out.println(m.size() + 1);

    }

    static long gcd(long a, long b) {
      if (b == 0) {
        return a;
      }
      return gcd(b, a % b);
    }

    static HashMap<Long, Long> prime_factor(long N) {
      HashMap<Long, Long> map = new HashMap<>();
      for (long i = 2; i * i <= N; i++) {
        while (N % i == 0) {
          if (map.containsKey(i)) {
            long v_ = map.get(i);
            map.put(i, v_ + 1);
          } else {
            map.put(i, (long) 1);
          }
          N /= i;
        }
      }
      if (N != 1) {
        map.put(N, (long) 1);
      }
      return map;
    }

  }
  ```
    