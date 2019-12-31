### ABC054

# B - Template Matching

  [問題はこちら](https://atcoder.jp/contests/abc054/tasks/abc054_b)

- 発想<br>
  A から M * M の配列を作れるだけ作って、 B と同じ配列があれば Yes を出力。<br>
  なければ No を出力。<br>
  愚直に調べてもいい。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, M;
    cin >> N >> M;

    vector<string> A(N);
    for (int i = 0; i < N; i++) {
      cin >> A[i];
    }

    vector<string> B(M);
    for (int i = 0; i < M; i++) {
      cin >> B[i];
    }

    string answer = "No";

    for (int i = 0; i <= N - M; i++) {

      vector<string> a(M);

      for (int j = 0; j <= N - M; j++) {

        for (int k = 0; k < M; k++) {
          a[k] = A[i + k].substr(j, M);
        }

        if (B == a) {
          answer = "Yes";
          break;
        }

      }

      if (answer == "Yes") {
        break;
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

      String[][] A = new String[N][N];

      for (int i = 0; i < N; i++) {
        String a = sc.next();
        A[i] = a.split("");
      }

      String[] B = new String[M];

      for (int i = 0; i < M; i++) {
        B[i] = sc.next();
      }

      sc.close();

      String[][] A2 = new String[N][N];

      int maxK = 0;
      int maxI = 0;

      for (int k = 0; k < N; k++) {
        for (int i = 0; i < N - M + 1; i++) {
          String a_ = "";
          for (int j = i; j < i + M; j++) {
            a_ += A[k][j];
          }
          A2[k][i] = a_;
          maxK = Math.max(maxK, k);
          maxI = Math.max(maxI, i);
        }
      }

      String result = "No";

      int cA = 0;
      int rA = 0;
      int cB = 0;

      while (cA <= maxI) {
        while (rA <= maxK) {
          if (A2[rA][cA].equals(B[cB])){
            result = "Yes";
            cB++;
            rA++;
            if (cB == M) {
              rA = maxK + 1;
            }
          } else {
            result = "No";
            rA++;
            cB = 0;
          }
        }
        if (result.equals("Yes")) {
          cA = maxI + 1;
        } else {
          rA = 0;
          cB = 0;
          cA++;
        }
      }

      if (result.equals("Yes") && cB != M) {
        result = "No";
      }

      System.out.println(result);

    }

  }
  ```
    