### ABC024

# B - 自動ドア

  [問題はこちら](https://atcoder.jp/contests/abc024/tasks/abc024_b)

- 発想<br>
  A_1 から A_N まで順番に調べていく。<br>
  A_i と A_{i-1} の差が T より小さい場合は、A_i と A_{i-1} の差だけ空いている。<br>
  A_i と A_{i-1} の差が T 以上場合は、T だけ空いている。<br>
  
- 実装のポイント<bt>
  ルールが終わったら、最後に A_N の分 T を加える。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, T;
    cin >> N >> T;

    vector<int> A(N);

    for (int i = 0; i < N; i++) {
      cin >> A[i];
    }

    int time = 0;

    for (int i = 1; i < N; i++) {
      if (T < A[i] - A[i - 1]) {
        time += T;
      } else {
        time += A[i] - A[i - 1];
      }
    }
    time += T;

    cout << time << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int N = sc.nextInt();
      int T = sc.nextInt();
      int[] A = new int[100000];

      for (int i = 0; i < N; i++) {
        A[i] = sc.nextInt();
      }

      int answer = 0;

      for (int i = 0; i < (N - 1); i++) {
        if (A[i+1] - A[i] < T) {
          answer += A[i+1] - A[i];
        } else if ((A[i+1] - A[i]) >= T) {
          answer += T;
        }
      }
      
      answer += T;

      System.out.println(answer);

    }
  }
  ```
    