### ABC092

# B - Chocolate

  [問題はこちら](https://atcoder.jp/contests/abc092/tasks/abc092_b)


- 発想<br>
  1 から N まで D を超えるまでの回数をそれぞれ数える。<br>
  それぞれの回数 + X が回答となる。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, D, X;
    cin >> N >> D >> X;

    int answer = 0;
    for (int i = 0; i < N; i++) {

      int A;
      cin >> A;

      int current = 0;
      int count = 0;
      bool flg = true;

      while (flg) {
        current = A * count + 1;
        if (D < current) {
          flg = false;
        } else {
          count++;
        }
      }

      answer += count;

    }

    cout << answer + X << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int N = sc.nextInt();
      int D = sc.nextInt();
      int X = sc.nextInt();

      int[] A = new int[N];

      for (int i = 0; i < N; i++) {
        A[i] = sc.nextInt();
      }

      sc.close();

      int count = 0;

      for (int i = 0; i < N; i++) {

        int j = 1;
        int k = 2;

        while (j <= D) {

          if (j == 1) {
            count++;
          } else if (((k-1) * A[i] + 1) == j) {
            count++; 
            k++;
          }

          j++;
        }

      }

      System.out.println(count + X);

    }

  }
  ```
    