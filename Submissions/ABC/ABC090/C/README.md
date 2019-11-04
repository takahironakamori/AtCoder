### ABC090

# C - Flip,Flip, and Flip......

  [問題はこちら](https://atcoder.jp/contests/abc090/tasks/arc091_a)

- 発想<br>
  裏返す回数が偶数の場合は表、裏返す回数が奇数の場合は裏を向くことになる。<br>
  したがって、各マスのカードのうち、奇数回裏返すカードが何枚あるのかを考える。<br>
  N = 1 かつ M = 1 のときは、1 枚のカードが 1 回裏返すことになるので、回答は 1 になる。<br>
  N = 1 かつ M ≠ 1 のときは、両端の 2 枚のカードは 2 回、それ以外のカードは 3 回裏返すことになるので、回答は M - 2 になる。<br>
  N ≠ 1 かつ M = 1 のときは、両端の 2 枚のカードは 2 回、それ以外のカードは 3 回裏返すことになるので、回答は N - 2 になる。<br>
  N ≧ 2 かつ M ≧ 2 のときは、<br>
  ・四隅のカードは、4 回裏返す<br>
  ・四隅以外の外側 1 辺のカードは 6 回裏返す<br>
  ・それ以外のカードは 9 回裏返す<br>
  すなわち、外側 1 周以外のカードが奇数回裏返すことになるので、回答は (N - 2) * (M - 2)となる。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, M;
    cin >> N >> M;

    if (N == 1 && M == 1) {
      cout << 1 << endl;
    } else if (N == 1) {
      cout << M - 2 << endl;
    } else if (M == 1) {
      cout << N - 2 << endl;
    } else {
      cout <<(long) (N - 2) * (M - 2) << endl;
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      long N = sc.nextLong();
      long M = sc.nextLong();

      sc.close();

      if (N == 1 && M == 1){
        System.out.println(1);
      } else if (N == 1) {
        System.out.println(M-2);
      } else if (M == 1) {
        System.out.println(N-2);
      } else {
        System.out.println((N-2) * (M-2));
      }

    }

  }
  ```
    