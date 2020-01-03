### ABC134

# B - Golden Apple

  [問題はこちら](https://atcoder.jp/contests/abc134/tasks/abc134_b)


- 発想<br>
  N / (D * 2 + 1) を切り上げたものが回答となる。<br>


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N, D;
    cin >> N >> D;

    cout << ceil((double) N / (D * 2 + 1)) << endl;

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
      sc.close();

      double r = (double) N / (2 * D + 1);

      int res = (int) Math.ceil(r);

      System.out.println(res);

    }

  }
  ```
    