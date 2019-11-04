### ABC125

# D - Flipping Signs

  [問題はこちら](https://atcoder.jp/contests/abc125/tasks/abc125_d)

- 発想<br>
  1 度の操作で 2 つ +、- の符号が変わる。<br>
  何回でも操作していいのだから、できるだけ - を減らし + を増やしたい。<br>
  A_1 から A_N の中で負の数が偶数個ある場合は、操作を繰り返すことで、すべて正の数にすることができる。<br>
  したがって、A_1 から A_N の中で負の数が偶数個ある場合は、A_1 から A_N までの合計が回答となる。<br>
  A_1 から A_N の中で負の数が奇数個ある場合は、操作を繰り返すことで、1つだけ負の数、残りをすべて正の数にすることができる。<br>
  したがって、A_1 から A_N の中で負の数が奇数個ある場合は、A_1 から A_N までの合計からA_1 から A_N までで絶対値が最も小さいものを引いた数が回答となる。<br>

- 実装のポイント<br>
  まず A_1 から A_N の合計を計算してから、<br>
  A_1 から A_N の中で負の数が奇数個ある場合に、合計から最小値*2を引いた方が実装が楽。<br>


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    vector<int> A(N);
    int count = 0;
    long sum = 0;

    for (int i = 0; i < N; i++) {
      int v ;
      cin >> v;
      if (v < 0) {
        count++;
      }
      A[i] = abs(v);
      sum += A[i];
    }

    sort(A.begin(), A.end());

    if (count % 2 != 0) {
      sum -= (2 * A[0]);
    }

    cout << sum << endl;

  }
  ```

- コード（Java）
  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int N = sc.nextInt();
      int[] A = new int[N];
      int count = 0;
      long sum = 0;

      for (int i = 0; i < N; i++) {
        int v = sc.nextInt();
        if (v < 0) {
          count++;
        }
        A[i] = Math.abs(v);
        sum += A[i];
      }

      sc.close();

      Arrays.sort(A);

      if (count % 2 != 0) {
        sum -= (2 * A[0]);
      }

      System.out.println(sum);

    }

  }
  ```
    