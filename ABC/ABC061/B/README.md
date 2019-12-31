### ABC061

# B - Counting Roads

  [問題はこちら](https://atcoder.jp/contests/abc061/tasks/abc061_b)


- 発想<br>
  要素数 N + 1 の配列を用意して、M 回、a_i および b_i の値を 1 加えていく。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, M;
    cin >> N >> M;

    vector<int> count(N+1);
    for (int i = 0; i < M; i++) {
      int a, b;
      cin >> a >> b;
      count[a]++;
      count[b]++;
    }

    for (int i = 1; i <= N; i++) {
      cout << count[i] << endl;
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
      int M = sc.nextInt();
      int[] a = new int[M];
      int[] b = new int[M];
      int[][] road = new int[N][N];

      for (int i = 0; i < M; i++) {
        a[i] = sc.nextInt() - 1;
        b[i] = sc.nextInt() - 1;
        road[a[i]][b[i]]++;
      }

      sc.close();

      for (int i = 0; i < N; i++) {
        int count = 0;
        for (int j = 0; j < N; j++) {
          if (road[i][j] != 0) {
            count += road[i][j];
          }
          if (road[j][i] != 0 && j != i) {
            count += road[j][i];
          }
        }
        System.out.println(count);
      }

    }

  }
  ```
    