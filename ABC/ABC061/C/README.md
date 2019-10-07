### ABC061

# C - Big Array

  [問題はこちら](https://atcoder.jp/contests/abc061/tasks/abc061_c)

- 発想<br>
  N の上限が 100000 なので、各数字が何個あるのかを保持する配列を用意する。<br>
  入力時に、配列[a] += b で数字の個数を把握し、すべての入力が終わったら、K 番目がどこになるかを調べる。

- 実装のポイント<br>
  for 文を i = 1 から始めるか、i = 0 から始めるかで、K -= n[i]; をする場所が変わってくるので注意する。

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    long N, K;
    cin >> N >> K;

    vector<long> n(100100);

    for (int i = 0; i < N; i++) {
      int a;
      int b;
      cin >> a >> b;
      n[a] += b;
    }

    for (int i = 1; i < 100100; i++) {
      if (K <= n[i]) {
        cout << i << endl;
        break;
      }
      K -= n[i];
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int N = sc.nextInt();
      long K = sc.nextLong();
      long[] num = new long[100010];

      for (int i = 0; i < N; i++) {
        int a = sc.nextInt();
        long b = sc.nextLong();
        num[a] += b;
      }

      sc.close();

      for (int i = 0; i < num.length; i++) {
        K = K - num[i];
        if (K <= 0) {
          System.out.println(i);
          break;
        }
      }

    }

  }
  ```
    