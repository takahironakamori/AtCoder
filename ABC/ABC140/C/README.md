### ABC140

# C - Maximal Value

  [問題はこちら](https://atcoder.jp/contests/abc140/tasks/abc140_c)

- 発想

  A_i に B_i を入れる。<br>
  A_i+1 に B_i を入れておく。<br>
  A_i+1 が B_i+1 より大きい場合は、条件を満たさないので、A_i+1 を B_i+1 に入れる。<br>
  A_i+2 に　B_i+1 を入れておく。<br>
  ...<br>
  以上を最後（ N - 1 回）まで繰り返して、A_i から A_Nまでの合計を出力する。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    vector<int> B(N);
    for (int i = 1; i < N; i++) {
      cin >> B[i];
    }

    vector<int> A(N+1);

    A[1] = B[1];

    for (int i = 1; i < N; i++) {
      if (B[i] < A[i]) {
        A[i] = B[i];
      }
      A[i + 1] = B[i];
    }

    int m = 0;

    for (int i = 1; i <= N; i++) {
      m += A[i];
    }

    cout << m << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int N = sc.nextInt();
      int[] B = new int[N];

      for(int i = 1; i < N; i++) {
        B[i] = sc.nextInt();
      }

      sc.close();

      int[] A = new int[N+1];

      A[1] = B[1];

      for (int i = 1; i < N; i++) {
        if (B[i] < A[i]) {
          A[i] = B[i];
        }
        A[i + 1] = B[i];
      }

      int max = 0;

      for (int i = 1; i <= N; i++) {
        max += A[i];
      }

      System.out.println(max);

    }

  }
  ```
    