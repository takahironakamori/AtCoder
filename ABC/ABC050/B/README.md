### ABC050

# B - Contest with Drinks Easy

  [問題はこちら](https://atcoder.jp/contests/abc050/tasks/abc050_b)

- 発想<br>
  T_1 から T_N までの合計をあらかじめ計算しておく。<br>
  合計 - T\[P\[i]] + X\[i] を M 回出力する。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    vector<int> T(N);
    int sum = 0;
    for (int i = 0; i < N; i++) {
      cin >> T[i];
      sum += T[i];
    }

    int M;
    cin >> M;

    vector<int> P(M);
    vector<int> X(M);
    for (int i = 0; i < M; i++) {
      cin >> P[i] >> X[i];
    }

    for (int i = 0; i < M; i++) {
      int answer = sum - T[P[i] - 1] + X[i];
      cout << answer << endl;
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
      int[] T = new int[N];

      for (int i = 0; i < N; i++) {
        T[i] = sc.nextInt();
      }

      int M = sc.nextInt();
      int[] P = new int[M];
      int[] X = new int[M];

      for (int i = 0; i < M; i++) {
        P[i] = sc.nextInt() - 1;
        X[i] = sc.nextInt();
      }

      sc.close();

      for (int i = 0; i < M; i++) {
        int time = 0;
        for (int j = 0; j < N; j++) {
          if (P[i] == j) {
            time += X[i];
          } else {
            time += T[j];
          }
        }
        System.out.println(time);
      }

    }

  }
  ```
    