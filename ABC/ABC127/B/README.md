### ABC127

# B - Algae

  [問題はこちら](https://atcoder.jp/contests/abc127/tasks/abc127_b)

- 発想<br>
  x\[i] = r * x\[i-1] - D を 10 回計算する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int r, D ,x;
    cin >> r >> D >> x;

    long long answer = x;
    for (int i = 0; i < 10; i++) {
      answer = r * answer - D;
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

      int r = sc.nextInt();
      int D = sc.nextInt();
      int X = sc.nextInt();

      sc.close();

      int[] x = new int[11];

      x[0] = X; 

      for (int i = 1; i < 11; i++) {
        x[i] = r * x[i-1] - D;
        System.out.println(x[i]);
      }

    }

  }
  ```
    