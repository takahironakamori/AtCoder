### ABC025

# B - 双子とスイカ割り

  [問題はこちら](https://atcoder.jp/contests/abc025/tasks/abc025_b)


- 発想<br>
  現在地用の変数（c）を用意しておく。<br>
  East なら c に加える。<br>
  West なら c から引く。<br>
  加える、引く値は、分岐させる。
  
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, A, B;
    cin >> N >> A >> B;

    int c = 0;

    for (int i = 0; i < N; i++) {

      string s;
      cin >> s;

      int d;
      cin >> d;

      if (s == "East") {
        if (d < A) {
          c += A;
        } else if (A <= d && d <= B) {
          c += d;
        } else {
          c += B;
        }
      } else {
        if (d < A) {
          c -= A;
        } else if (A <= d && d <= B) {
          c -= d;
        } else {
          c -= B;
        }
      }

    }

    if (0 == c) {
      cout << 0 << endl;
    } else if (0 < c) {
      cout << "East" << " " << c << endl;
    } else {
      cout << "West" << " " << abs(c) << endl;
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int N = sc.nextInt();
      int A = sc.nextInt();
      int B = sc.nextInt();
      String[] s = new String[N];
      int[] d = new int[N];

      for (int i = 0; i < N; i++) {
        s[i] = sc.next();
        d[i] = sc.nextInt();
      }

      int position = 0;

      for (int i = 0; i < N; i++) {
        if (s[i].equals("East")) {
          if ((A <= d[i]) && (d[i] <= B)) {
            position += d[i];
          } else if (d[i] < A) {
            position += A;
          } else if (B < d[i]) {
            position += B;
          }
        } else {
          if ((A <= d[i]) && (d[i] <= B)) {
            position -= d[i];
          } else if (d[i] < A) {
            position -= A;
          } else if (B < d[i]) {
            position -= B;
          }
        }
      }

      if (position == 0) {
        System.out.println(0);
      } else if (position < 0) {
        System.out.print("West ");
        System.out.println(Math.abs(position));
      } else {
        System.out.print("East ");
        System.out.println(position);
      }

    }
  }
  ```
    