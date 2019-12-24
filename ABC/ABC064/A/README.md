### ABC064

# A - RGB Cards

  [問題はこちら](https://atcoder.jp/contests/abc064/tasks/abc064_a)


- 発想<br>
  整数は、r * 100 + b * 10 + g で作れる。<br>


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int r, b, g;
    cin >> r >> b >> g;

    int sum = r * 100 + b * 10 + g;

    if (sum % 4 == 0) {
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
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int r = sc.nextInt();
      int b = sc.nextInt();
      int g = sc.nextInt();
      int rbg = (r * 100) + (b * 10) + g;

      if ((rbg % 4) == 0) {
        System.out.println("YES");
      } else {
        System.out.println("NO");
      }

    }
  }
  ```
    