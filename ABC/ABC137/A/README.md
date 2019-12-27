### ABC137

# A - +-x

  [問題はこちら](https://atcoder.jp/contests/abc137/tasks/abc137_a)


- 発想<br>
  A + B, A - B, A * B で最大を出力する。<br>
  


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int A, B;
    cin >> A >> B;

    cout << max(A + B, max(A - B, A * B)) << endl;

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

      sc.close(); 

      int max = A + B;

      max = Math.max(max,A-B);

      max = Math.max(max, A * B);

      System.out.println(max);

    }

  }
  ```
    