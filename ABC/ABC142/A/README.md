### ABC142

# A - Odds of Oddness

  [問題はこちら](https://atcoder.jp/contests/abc142/tasks/abc142_a)


- 発想<br>
  奇数の数 ÷ N を求める。<br>
  

- 実装のポイント<br>
  int型で N を 2 で割る。int型で割り算をすると、小数点以下切り捨てなので、答えは偶数の数になる。<br>
  N から偶数の数を引くと奇数の数を求めることができる。<br>
  double型で、奇数の数を N で割ると小数点以下も計算される。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    int even = N / 2;
    int odd = N - even;

    cout << (double)odd / N << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int N = sc.nextInt();
      sc.close();

      int even = N / 2;
      int odd = N - even;

      System.out.println((double)odd / N);

    }

  }
  ```
    