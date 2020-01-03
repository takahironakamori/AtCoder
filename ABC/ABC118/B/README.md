### ABC118

# B - Foods Loved by Everyone

  [問題はこちら](https://atcoder.jp/contests/abc118/tasks/abc118_b)


- 発想<br>
  要素数が M の配列を作り、食べ物ごとに好きと答えた数を集計する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, M;
    cin >> N >> M;

    vector<int> A(M);

    for (int i = 0; i < N; i++) {
      int K;
      cin >> K;
      for (int j = 0; j < K; j++) {
        int a;
        cin >> a;
        A[a - 1]++;
      }
    }

    int answer = 0;

    for (int i = 0; i < M; i++) {
      if (A[i] == N) {
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

      int[] K = new int[N];
      int[][] A = new int[N][];

      for (int i = 0; i < N; i++) {
        K[i] = sc.nextInt();
        A[i] = new int[K[i]];
        for (int j = 0; j < K[i]; j++) {
          A[i][j] = sc.nextInt();
        }
      }

      sc.close();

      int[] m = new int[M+1];

      for (int i = 0; i < N; i++) {

        for (int j = 0; j < K[i]; j++) {

          m[A[i][j]]++;

        }

      }

      int count = 0;

      for (int i = 0; i < M+1; i++) {
        if (m[i] == N) {
          count++;
        }
      }

      System.out.println(count);

    }

  }
  ```
    