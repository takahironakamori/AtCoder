### ABC096

# A - Day of Takahashi

  [問題はこちら](https://atcoder.jp/contests/abc096/tasks/abc096_a)

- 発想<br>
  b が a 以上だと a、<br>
  それ以外は a - 1 を出力する。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int a, b;
    cin >> a >> b;

    if (a <= b) {
      cout << a << endl;
    } else {
      cout << a - 1 << endl;
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

      if (a <= b) {
        System.out.println(a);
      } else {
        System.out.println(a - 1);
      }

    }
  }
  ```
    