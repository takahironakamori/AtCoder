### ABC031

# B - 運動管理

  [問題はこちら](https://atcoder.jp/contests/abc031/tasks/abc031_b)


- 発想<br>
  A が L 以上、H 以下であれば、0 を出力する。<br>
  A が L 未満であれば、L - A を出力する。<br>
  上記以外の場合は、-1 を出力する。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int L, H, N;
    cin >> L >> H >> N;

    vector<int> A(N);

    for (int i = 0; i < N; i++) {
      cin >> A[i];
    }

    for (int i = 0; i < N; i++) {

      if (L <= A[i] && A[i] <= H) {
        cout << 0 << endl;
      } else if (A[i] < L) {
        cout << L - A[i] << endl;
      } else {
        cout << -1 << endl;
      }

    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int L = sc.nextInt();
      int H = sc.nextInt();
      int N = sc.nextInt();
      int[] A = new int[N];

      for (int i = 0; i < N; i++) {
        A[i] = sc.nextInt();
      }

      sc.close();

      for (int i = 0; i < N; i++) {
        if (A[i] <= L) {
          System.out.println(L - A[i]);
        } else if (A[i] <= H) {
          System.out.println(0);
        } else {
          System.out.println(-1);
        }
      }

    }

  }
  ```
    