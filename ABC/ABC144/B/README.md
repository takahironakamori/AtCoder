### ABC144

# B - 81

  [問題はこちら](https://atcoder.jp/contests/abc144/tasks/abc144_b)

- 発想<br>
  1 * 1 から 9 * 9 まで N と同じになるかを全部試す。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    for (int i = 1; i < 10; i++) {
      for (int j = 1; j < 10; j++) {
        if (i * j == N) {
          cout << "Yes" << endl;
          return 0;
        }
      }
    }

    cout << "No" << endl;
    return 0;
  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int N = sc.nextInt();
      sc.close();

      String answer = "No";
      for (int i = 1; i < 10; i++) {
        for (int j = 1; j < 10; j++) {
          if (i * j == N) {
            answer = "Yes";
          }
        }
      }

      System.out.println(answer);

    }

  }
  ```
    