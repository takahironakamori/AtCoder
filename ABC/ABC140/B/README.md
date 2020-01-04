### ABC140

# B - Buffet

  [問題はこちら](https://atcoder.jp/contests/abc140/tasks/abc140_b)

- 発想<br>
  A と B を配列に入れ、A_1 から A_N まで B_A_i を加えていく。<br>
  A_i が 1 つ前の A との差が 1 だった場合は、C_i も加える。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    vector<int> A(N);
    vector<int> B(N);
    vector<int> C(N - 1);

    for (int i = 0; i < N; i++) {
      cin >> A[i];
    }

    for (int i = 0; i < N; i++) {
      cin >> B[i];
    }

    for (int i = 0; i < N - 1; i++) {
      cin >> C[i];
    }

    int answer = 0;
    int current = 100;

    for (int i = 0; i < N; i++) {
      answer += B[A[i] - 1];
      if (A[i] - current == 1){
        answer += C[A[i] - 2];
      }
      current = A[i];
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
      int[] A = new int[N];
      int[] B = new int[N];
      int[] C = new int[N - 1];

      int result = 0;

      for(int i = 0; i < N; i++) {
        A[i] = sc.nextInt();
      }

      for(int i = 0; i < N; i++) {
        B[i] = sc.nextInt();
        result += B[i];
      }

      for(int i = 0; i < N - 1; i++) {
        C[i] = sc.nextInt();  
      }

      sc.close();

      for(int i = 0; i < N - 1; i++) {
        if (A[i] + 1 == A[i + 1]){
          result += C[A[i] - 1];
        }
      }

      System.out.println(result);

    }

  }
  ```
    