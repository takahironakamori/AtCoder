### ABC103

# C - Modulo Summation

  [問題はこちら](https://atcoder.jp/contests/abc103/tasks/abc103_c)

- 発想
  
  a_1, から a_N までの最小公倍数を M すれば、M mod a_1, ..., M mod a_N すべてのあまりは 0 になる。<br>
  そして、(M - 1) mod a_1 と、あまりは (a_i - 1) になり、あまりを最大化になる。
  
- 実装のポイント

  あまりは (a_i - 1) になることがわかっているので、a_1, から a_N までの最小公倍数を M を求めるまでもない。<br>
  ループで、(a_i - 1) を加えていけばいい。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    vector<int> a(N);
    for (int i = 0; i < N; i++) {
      cin >> a[i];
    }

    long max = 0;

    for (int i = 0; i < N; i++) {
      max += a[i] - 1;
    }

    cout << max << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int N = sc.nextInt();
      int[] a = new int[N];

      for (int i = 0; i < N; i++) {
        a[i] = sc.nextInt();
      }

      sc.close(); 

      long max = 0;

      for (int i = 0; i < N; i++) {
        max += a[i] - 1;
      }

      System.out.println(max);

    }

  }
  ```
    