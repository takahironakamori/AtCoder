### ABC040

# A - 赤赤赤赤青

  [問題はこちら](https://atcoder.jp/contests/abc040/tasks/abc040_a)


- 発想<br>
  x が n / 2 以下の場合は、 n - x<br>
  それ以外の場合は、x - 1 を出力する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, x;
    cin >> n >> x;

    if (x <= n / 2) {
      cout << x - 1 << endl;
    } else {
      cout << n - x << endl;
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();
      int x = sc.nextInt();

      if ((n / 2) < x) {
        System.out.println(n - x);
      } else {
        System.out.println(x - 1);
      }

    }
  }
  ```
    