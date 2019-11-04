### ABC112

# D - Partition

  [問題はこちら](https://atcoder.jp/contests/abc112/tasks/abc112_d)

- 発想<br>
  問題文に条件がないので、数列 a には同じ数が入っていてもよい。<br>
  a_1, a_2, ... a_N の最大公約数を D とすると、a_1, a_2, ... a_N はすべて D で割り切れる。<br>
  そして、M は a_1 + a_2 + ... + a_N なので、M も D で割り切れる。<br>
  したがって、D は M の約数である。<br>
  また、a_1, a_2, ... a_N はすべて D 以上なので、M ≧ N * D である。<br>
  a_1, a_2, ... a_N はすべて D 以上、M ≧ N * D である条件を満たす a_1, a_2, ... a_N は、<br>
  D, D, ... M - (N - 1) * D で数列を作ることができる。<br>
  したがって、M の約数かつ M / N 以下の整数の中で最も大きいものが回答となる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  vector<long> divisor(long N) {
    vector<long> res;
    for (long i = 1; i * i <= N; i++) {
      if (N % i == 0) {
        res.push_back(i);
        if (i != N / i) {
          res.push_back(N / i);
        }
      }
    }
    return res;
  }

  int main() {

    int N, M;
    cin >> N >> M;

    int d = M / N;

    vector<long> v = divisor(M);

    long answer = 0;

    for (int i = 0; i < v.size(); i++) {
      if (v[i] <= d) {
        answer = max(answer, v[i]);
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
      long N = sc.nextLong();
      long M = sc.nextLong();
      sc.close();

      long d = M / N;

      Set<Long> v = divisor(M);

      long answer = 0;

      for (Long value : v) {
        if (value <= d) {
          answer = Math.max(answer, value);
        }
      }

      System.out.println(answer);

    }

    static Set<Long> divisor (long N) {
      Set<Long> res = new HashSet<Long>();
      for (long i = 1; i * i <= N; i++) {
        if (N % i == 0) {
          res.add(i);
          if (i != N / i) {
            res.add(N / i);
          }
        }
      }
      return res;
    }

  }
  ```
    