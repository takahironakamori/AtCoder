### ABC072

# A - Sandglass2

  [問題はこちら](https://atcoder.jp/contests/abc072/tasks/abc072_a)

- 発想<br>
  X - t を出力すればいいが、結果が 0 以下になる場合は 0 を出力する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int X, t;
    cin >> X >> t;

    if (0 < X - t) {
      cout << X - t << endl;
    } else {
      cout << 0 << endl;
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int X = sc.nextInt();
      int t = sc.nextInt();

      if ((X - t) < 0) {
        System.out.println(0);
      } else {
        System.out.println(X - t);
      }

    }
  }
  ```
    