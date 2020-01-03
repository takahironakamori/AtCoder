### ABC112

# B - Time Limit Exceeded

  [問題はこちら](https://atcoder.jp/contests/abc112/tasks/abc112_b)


- 発想<br>
  t が T 以下のもののなかから、最小の c を探す。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, T;
    cin >> N >> T;

    int answer = 0;

    for (int i = 0; i < N; i++) {
      int c, t;
      cin >> c >> t;
      if (t <= T) {
        if (answer == 0){
          answer = c;
        } else {
          answer = min(answer, c);
        }
      }
    }

    if (answer == 0) {
      cout << "TLE" << endl;
    } else {
      cout << answer << endl;
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
      int T = sc.nextInt();

      int[] c = new int[N];
      int[] t = new int[N];

      for (int i = 0; i < N; i++) {
        c[i] = sc.nextInt();
        t[i] = sc.nextInt();
      }

      sc.close();

      int min = 1001;

      for (int i = 0; i < N; i++) {

        if (t[i] <= T) {
          min = Math.min(min, c[i]);
        }

      }

      if (min == 1001) {
        System.out.println("TLE");
      } else {
        System.out.println(min);
      }

    }

  }
  ```
    