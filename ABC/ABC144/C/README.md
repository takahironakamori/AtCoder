### ABC144

# C - Walk on Multiplication Table

  [問題はこちら](https://atcoder.jp/contests/abc144/tasks/abc144_c)

- 発想<br>
  N の約数を探す。<br>
  N = a * b で a + b が最小のものから 2 を引いた値が回答となる。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  // Nの約数を配列で返す
  vector<long long> divisor(long long N) {
    vector<long long> res;
    for (long long i = 1; i * i <= N; i++) {
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

    long long N;
    cin >> N;

    vector<long long> v = divisor(N);

    int l = v.size();
    if (l % 2 == 0) {
      cout << v[l - 1] + v[l - 2] - 2 << endl;
    } else {
      cout << (v[l - 1] * 2) - 2 << endl;
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
      sc.close();

      Deque<Long> v = divisor(N);

      int l = v.size();
      if (l % 2 == 0) {
        System.out.println(v.pollLast() + v.pollLast() - 2);
      } else {
        System.out.println(v.pollLast() * 2 - 2);
      }

    }

    // Nの約数をDequeで返す
    static Deque<Long> divisor (long N) {
      Deque<Long> res = new ArrayDeque<>();
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
    