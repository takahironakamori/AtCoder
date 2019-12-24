### ABC053

# A - ABC/ARC

  [問題はこちら](https://atcoder.jp/contests/abc053/tasks/abc053_a)

- 発想<br>
  x が 1200 未満なら ABC を、そうでない場合は ARC を出力する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int x;
    cin >> x;

    if (x < 1200) {
      cout << "ABC" << endl;
    } else {
      cout << "ARC" << endl;
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int x = sc.nextInt();

      if (1200 <= x) {
        System.out.println("ARC");
      } else {
        System.out.println("ABC");
      }

    }
  }
  ```
    