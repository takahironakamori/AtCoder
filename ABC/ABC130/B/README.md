### ABC130

# B - Bounding

  [問題はこちら](https://atcoder.jp/contests/abc130/tasks/abc130_b)


- 発想<br>
  D_i 用の配列を作成し、問題文の計算式を L_N まで行い、<br>
  X 以下の個数を数える。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, X;
    cin >> N >> X;

    vector<int> D(N+1);

    D[0] = 0;

    for (int i = 0; i < N; i++) {
      int L;
      cin >> L;
      D[i+1] = D[i] + L;
    }

    int answer = 0;

    for (int i = 0; i <= N; i++) {
      if (D[i] <= X) {
        answer++;
      } else {
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
      int X = sc.nextInt();
      int[] L = new int[N+1];

      L[0] = 0;
      for (int i = 1; i <= N; i++) {
        L[i] = L[i-1] + sc.nextInt();
      }
      sc.close();

      int count = 0;

      if(L[N] <= X){
        count = N+1;
      } else {
        for (int i = 0; i <= N; i++) {
          if(L[i] <= X){
            count++;
          }
        }
      }

      System.out.println(count);

    }

  }
  ```
    