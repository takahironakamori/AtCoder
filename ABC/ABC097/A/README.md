### ABC097

# A - Colorful Transceivers

  [問題はこちら](https://atcoder.jp/contests/abc097/tasks/abc097_a)

- 発想<br>
  b が a 以上だと a、<br>
  それ以外は a - 1 を出力する。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (abs(a - c) <= d) {
      cout << "Yes" << endl;
    } else if ((abs(a - b) <= d) && (abs(b - c) <= d)) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }

  }
  ```

- コード（Java）
  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int a = sc.nextInt();
      int b = sc.nextInt();
      int c = sc.nextInt();
      int d = sc.nextInt();

      if (Math.abs(a - b) <= d && Math.abs(b - c) <= d) {
        System.out.println("Yes");
      } else if (Math.abs(a - c) <= d) {
        System.out.println("Yes");
      } else {
        System.out.println("No");
      }

    }
  }
  ```
    