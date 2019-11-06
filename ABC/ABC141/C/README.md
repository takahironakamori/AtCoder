### ABC141

# C - Attack Survival

  [問題はこちら](https://atcoder.jp/contests/abc141/tasks/abc141_c)

- 発想

  各参加者がそれぞれ正解した数を数える。<br>
  各参加者の問題終了時のポイントは、K + 正解数 - Q で求めることができる。<br>
  終了時のポイントが 0 より大きかったら"Yes"、0以下の場合は、"No"を出力する。
  
- 実装のポイント

  N の最大値が10^5と出力する数が多くなるため、Javaの場合は PrintWriter を使った方がいい。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, K, Q;
    cin >> N >> K >> Q;

    vector<int> A(N);
    for (int i = 0; i < Q; i++) {
      int i_;
      cin >> i_;
      A[i_ - 1]++;
    }

    for (int i = 0; i < N; i++) {
      if (0 < (K + A[i] - Q)) {
        cout << "Yes" << endl;
      } else {
        cout << "No" << endl;
      }
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  import java.io.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int N = sc.nextInt();
      int K = sc.nextInt();
      int Q = sc.nextInt();
      int[] A = new int[N];

      for (int i = 0; i < Q; i++) {
        int i_ = sc.nextInt();
        A[i_ - 1]++;
      }

      sc.close();

      PrintWriter out = new PrintWriter(System.out);

      for (int i = 0; i < N; i++) {
        if (0 < A[i] + K - Q) {
          out.println("Yes");
        } else {
          out.println("No");
        }
      }

      out.flush();

    }

  }
  ```
    