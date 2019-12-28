### ABC038

# B - ディスプレイ

  [問題はこちら](https://atcoder.jp/contests/abc038/tasks/abc038_b)


- 発想<br>
  H1 = H2 または H1 = W2 または W1 = H2 また W1 = W2 なら YES となる。<br>


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int H1, W1, H2, W2;
    cin >> H1 >> W1 >> H2 >> W2;

    if (H1 == H2 || H1 == W2 || W1 == H2 || W1 == W2) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int H1 = sc.nextInt();
      int W1 = sc.nextInt();
      int H2 = sc.nextInt();
      int W2 = sc.nextInt();

      sc.close();

      String result = "NO";

      if (H1 == H2 || H1 == W2 || W1 == H2 || W1 == W2) {
        result = "YES";
      }

      System.out.println(result);

    }

  }
  ```
    