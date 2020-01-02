### ABC099

# B - Stone Monument

  [問題はこちら](https://atcoder.jp/contests/abc099/tasks/abc099_b)


- 発想<br>
  1 から、b と a の差までの和 - b が回答となる。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int a, b;
    cin >> a >> b;

    int d = b - a;

    d = d * (d + 1) / 2;

    cout << d - b << endl;

  }
  ```

- コード（Java）
  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int a = sc.nextInt();
      int b = sc.nextInt();

      sc.close();

      int count = b - a;

      int h = 0;

      for (int i = 1; i <= count; i++) {
        h += i;
      }

      System.out.println(h - b);

    }

  }
  ```
    