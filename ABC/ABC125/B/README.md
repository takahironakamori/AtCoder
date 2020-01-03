### ABC125

# B - Resale

  [問題はこちら](https://atcoder.jp/contests/abc125/tasks/abc125_b)


- 発想<br>
  V_i - C_i がプラスの宝石だけを手に入れればいい。<br>


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    vector<int> V(N);
    vector<int> C(N);

    for (int i = 0; i < N; i++) {
      cin >> V[i];
    }

    for (int i = 0; i < N; i++) {
      cin >> C[i];
    }

    int answer = 0;

    for (int i = 0; i < N; i++) {
      if (0 < V[i] - C[i]) {
        answer += V[i] - C[i];
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
      int[] V = new int[N];
      int[] C = new int[N];

      for (int i = 0; i < N; i++) {
        V[i] = sc.nextInt();
      }

      for (int i = 0; i < N; i++) {
        C[i] = sc.nextInt();
      }

      sc.close();

      int[] R = new int[N];

      for (int i = 0; i < N; i++) {
        R[i] = V[i] - C[i];
      }

      int sum = 0;

      for (int i = 0; i < N; i++) {
        if (0 < R[i]) {
          sum += R[i];
        }
      }

      System.out.println(sum);

    }

  }
  ```
    