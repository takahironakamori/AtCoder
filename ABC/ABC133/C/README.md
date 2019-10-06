### ABC133

# C - Remainder Minimization 2019

  [問題はこちら](https://atcoder.jp/contests/abc133/tasks/abc133_c)

- 発想<br>
  2019で割るため、余りは必ず0 から 2019 の間になる。<br>


- 実装のポイント<br>
  L と R が大きい値なので、単純に計算をすると計算量が大きくなる。<br>
  2019で割るため、余りは必ず 0 から 2019 の間になるので、R が L + 2019 より大きい場合は、 L + 2019 まで計算すれば十分。<br>
  L と R が long で取得して、for 文の i とかで使う場合は、 long型に合わせる。<br>
  (i * j) % 2019 だと、i * j が巨大になるので、(i % 2019) * (j % 2019) % 2019 とする。 


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    long L, R;
    cin >> L >> R;

    long answer = 2018;

    if (L + 2019 < R) {
      R = L + 2019;
    }

    for (long i = L; i <= R; i++){
      for (long j = i + 1; j <= R; j++) {
        long a_ = (i % 2019) * (j % 2019) % 2019;
        answer = min(answer, a_);
      }

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

      long L = sc.nextLong();
      long R = sc.nextLong();

      sc.close();

      long r = Math.min(R, L + 2019);

      long min = 2018;

      for (long i = L; i <= r; i++){
        for (long j = i + 1; j <= r; j++){
          long m = (i % 2019) * (j % 2019) % 2019;
          min = Math.min(min, m);
        }
      }

      System.out.println(min);

    }

  }
  ```
    