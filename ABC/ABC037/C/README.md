### ABC037

# B - 編集

  [問題はこちら](https://atcoder.jp/contests/abc037/tasks/abc037_b)


- 発想<br>
  数列の L 番目以上、R 番目以下の値を T に置き換える作業を Q 回する。<br>


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, Q;
    cin >> N >> Q;

    vector<int> a(N);

    for (int i = 0; i < Q; i++) {

      int L, R, T; 
      cin >> L >> R >> T;

      for (int j = 0; j < N; j++) {
        if (L - 1 <= j && j <= R - 1) {
          a[j] = T;
        }
      }

    }

    for (int i = 0; i < N; i++) {
      cout << a[i] << endl;
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
      int Q = sc.nextInt();
      int[] L = new int[Q];
      int[] R = new int[Q];
      int[] T = new int[Q];

      for (int i = 0; i < Q; i++) {
        L[i] = sc.nextInt() - 1;
        R[i] = sc.nextInt() - 1;
        T[i] = sc.nextInt();
      }

      sc.close();

      int[] ans = new int[N];

      for (int i = 0; i < Q; i++) {
        for (int j = L[i]; j < R[i]+1; j++) {
          ans[j] = T[i];
        }
      }

      for (int i = 0; i < N; i++) {
        System.out.println(ans[i]);
      }

    }

  }
  ```
    