### ABC102

# B - Maximum Difference

  [問題はこちら](https://atcoder.jp/contests/abc102/tasks/abc102_b)


- 発想<br>
  A_1 から A_N まで配列に入れて、並び替えて末尾の値から先頭の値を引く。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
      cin >> A[i];
    }

    sort(A.begin(), A.end());

    cout << A[N - 1] - A[0] << endl;

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
        A[i] = sc.nextInt();
      }

      sc.close();

      Arrays.sort(A);

      System.out.println(Math.abs(A[0] - A[N-1]));

    }

  } 
  ```
    