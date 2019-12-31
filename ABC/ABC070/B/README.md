### ABC070

# B - Two Switches

  [問題はこちら](https://atcoder.jp/contests/abc070/tasks/abc070_b)


- 発想<br>
  B と D で小さい方から A と C で大きい方を引く。<br>
  その値と 0 で大きい方が回答となる。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int A, B, C, D;
    cin >> A >> B >> C >> D;

    int answer = min(D,B) - max(A,C);

    cout << max(0, answer) << endl;

  }
  ```

- コード（Java）
  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int A = sc.nextInt();
      int B = sc.nextInt();
      int C = sc.nextInt();
      int D = sc.nextInt();

      sc.close();

      int[] time = new int[102];

      time[A+1]++;
      time[B+1]--;
      time[C+1]++;
      time[D+1]--;

      for (int i = 2; i < 101; i++) {
        time[i] += time[i-1]; 
      }

      int count = 0;

      for (int i = 1; i < 101; i++) {
        if (time[i] == 2) {
          count++;
        } 
      }

      System.out.println(count);

    }

  }
  ```
    