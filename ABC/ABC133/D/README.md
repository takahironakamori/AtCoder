### ABC133

# D - Rain Flows into Dams

  [問題はこちら](https://atcoder.jp/contests/abc133/tasks/abc133_d)

- 発想<br>
  数列の問題。<br>
  S = A_1 + A_2 + ... + A_N<br>
  S = x_1 * x_2 + ... + x_N<br>
  x_i + x_{i+1} = 2*A_i<br>
  x_1 = S - (x_2 + x_3 + x_4 + x_5 + ... + x_N)<br>
  x_1 = S - 2(A_2 + A_4 + ... A_{N-1})<br>
  x_2 = 2*A_1 - x_1


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    int S = 0;
    int Aodd = 0;

    vector<int> A(N);

    for (int i = 0; i < N; i++) {
      cin >> A[i];
      S += A[i];
      if (i % 2 == 1) {
        Aodd += A[i];
      }
    }

    vector<int> X(N+1);

    X[0] = S - 2 * Aodd;

    cout << X[0] << " ";

    for (int i = 1; i < N; i++) {
      X[i] = 2 * A[i-1] - X[i-1];
      cout << X[i];
      if (i == N-1) {
        cout << endl;
      } else {
        cout << " ";
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

      int N = sc.nextInt();

      int S = 0;
      int Aodd = 0;

      int[] A = new int[N]; 
      for (int i = 0; i < N; i++) {
        A[i] = sc.nextInt();
        S += A[i];
        if (i % 2 == 1) {
          Aodd += A[i];
        }
      }
      sc.close();

      int[] X = new int[N];

      X[0] = S - 2 * Aodd;

      System.out.print(X[0] + " ");

      for (int i = 1; i < N; i++) {
        X[i] = 2 * A[i-1] - X[i-1];
        System.out.print(X[i]);
        if (i == N-1) {
          System.out.println("");
        } else {
          System.out.print(" ");
        }
      }

    }
  }
  ```
    