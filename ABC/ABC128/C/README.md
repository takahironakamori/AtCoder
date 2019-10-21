### ABC128

# C - Switches

  [問題はこちら](https://atcoder.jp/contests/abc128/tasks/abc128_c)

- 発想<br>  
  スイッチの on・off のパターンを全部洗い出す。<br>
  on の数を数えて、すべての電球の条件に合えば組み合わせの数を増やす。
  
- 実装のポイント<br>
  スイッチの on・off のパターンを全部洗い出して、電球の条件と照らし合わせる実装方法として、<br>
  ビット全探索（コード（C++）参照）とDFS（コード（Java）参照）がある。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, M;
    cin >> N >> M;

    vector<vector<int>> v(M);
    for (int i = 0; i < M; i++) {
      int k;
      cin >> k;
      v[i].resize(k);
      for (int j = 0; j < k; j++) {
        cin >> v[i][j];
        v[i][j] -= 1;
      }
    }

    vector<int> p(M);
    for (int i = 0; i < M; i++) {
      cin >> p[i];
    }

    int answer = 0;
    for (int i = 0; i < (1 << N); i++) {
      bool validate = true;
      for (int j = 0; j < M; j++) {
        int c = 0;
        for (int k = 0; k < v[j].size(); k++) {
          if ((i >> v[j][k]) & 1) {
            c++;
          }
        }
        if ((c % 2) != p[j]) {
          validate = false;
        }
      }
      if (validate) {
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

    public static int N;
    public static int M;
    public static int[] k;
    public static int[][] s;
    public static int[] p;
    public static int[] status;
    public static int count;

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      N = sc.nextInt();
      M = sc.nextInt();

      k = new int[M];
      s = new int[M][];

      p = new int[M];

      status = new int[N];

      for (int i = 0; i < M; i++) {

        k[i] = sc.nextInt();
        s[i] = new int[k[i]];

        for (int j = 0; j < k[i]; j++) {
          s[i][j] = sc.nextInt();
        }

      }

      for (int i = 0; i < M; i++) {
        p[i] = sc.nextInt();
      }

      sc.close();

      count = 0;

      dfs(0, status);

      System.out.println(count);

    }

    public static void dfs(int i, int[] status){

      if (i == N) {

        int check = 0;

        for (int j = 0; j < M; j++) {
          int on = 0;

          for (int k = 0; k < s[j].length; k++) {
            int l = s[j][k] - 1;
            if (status[l] == 1) {
              on++;
            }
          }
          if (on % 2 == p[j]){
            check++;
          }
        }

        if (check == M){
          count++;
        }

        return;

      }

      status[i] = 0;
      dfs(i+1, status);

      status[i] = 1;
      dfs(i+1, status);

    }

  }
  ```
    