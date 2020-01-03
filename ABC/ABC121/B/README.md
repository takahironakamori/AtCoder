### ABC121

# B - Can you solve this?

  [問題はこちら](https://atcoder.jp/contests/abc121/tasks/abc121_b)

- 発想<br>
  A_1 から A_M まで全部、調べる。<br>
  

- コード（C++）

  ```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, M, C;
  cin >> N >> M >> C;

  vector<int> B(M);
  for (int i = 0; i < M; i++) {
    cin >> B[i];
  }

  int answer = 0;

  for (int i = 0; i < N; i++) {
    int A = 0;
    for (int j = 0; j < M; j++) {
      int a_;
      cin >> a_;
      A += a_ * B[j];
    }
    if (0 < A + C) {
      answer++;
    }
  }

  cout << answer << endl;

}
  ```

- コード（Java）
  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int N = sc.nextInt();
      int M = sc.nextInt();
      int C = sc.nextInt();
      int[][] A = new int[N][M];
      int[] B = new int[M];

      for (int i = 0; i < M; i++) {
        B[i] = sc.nextInt();
      }

      for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
          A[i][j] = sc.nextInt();
        }
      }

      sc.close();

      int count = 0;

      for (int i = 0; i < N; i++) {
        int sum = C;
        for (int j = 0; j < M; j++) {
          sum += A[i][j] * B[j]; 
        }
        if (0 < sum) {
          count++;
        }
      }

      System.out.println(count);

    }

  }
  ```
    