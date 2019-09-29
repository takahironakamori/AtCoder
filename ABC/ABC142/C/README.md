### ABC142

# C - Go to School

  [問題はこちら](https://atcoder.jp/contests/abc142/tasks/abc142_c)

- 発想

  生徒が登校した時点で、教室にいる生徒の数（自分も含めて）は、登校した順番と同じ。<br>
  A の数が少ない順に出席番号が出力すればいい。

- 実装のポイント

  インデックスを登校した順番とする配列を作り、値を出席番号にする。<br>
  すなわち、A[登校順] = 出席番号 の配列を作る。<br>
  配列は 0 から、出席番号は 1 から始まっているので、インデックスの数値や値に気をつける。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    vector<int> A(N);

    for (int i = 0; i < N; i++) {
      int a;
      cin >> a;
      A[a - 1] = i + 1;
    }

    for (int i = 0; i < N; i++) {
      cout << A[i];
      if (i != N - 1) {
        cout << " ";
      }
    }

    cout << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int N = sc.nextInt();

      int[] A = new int[N];

      for (int i = 0; i < N; i++) {
        int a = sc.nextInt();
        A[a - 1] = i + 1;
      }

      sc.close();

      for (int i = 0; i < N; i++) {
        System.out.print(A[i]);
        if (i != N - 1) {
          System.out.print(" ");
        }
      }

      System.out.println("");

    }

  }
  ```
    