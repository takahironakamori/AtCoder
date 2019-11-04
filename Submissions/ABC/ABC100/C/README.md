### ABC100

# C - *3 or /2

  [問題はこちら](https://atcoder.jp/contests/abc100/tasks/abc100_c)

- 発想<br>
  ある値を3倍しても、2で割る回数は増えも減りもしない。<br>
  したがって、「3倍する」は今回の回答には影響を与えないので考えない。<br>
  N 個の中から、2で割る対象は1回の操作で1個にすることが、操作回数が最も多くなる。<br>
  
  したがって、a_1 から a_N まで、<br>
  （a_1 が 2で割れる回数）+（a_2 が 2で割れる回数） + ... + （a_N が 2で割れる回数）を計算すればいい。
  

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
    