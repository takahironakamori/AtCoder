### ABC034

# A - テスト

  [問題はこちら](https://atcoder.jp/contests/abc034/tasks/abc034_a)

- 発想<br>
  x と y を比較する。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int x, y;
    cin >> x >> y;

    if (x < y) {
      cout << "Better" << endl;
    } else {
      cout << "Worse" << endl;
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
      int y = sc.nextInt();

      if (x < y){
        System.out.println("Better");
      } else {
        System.out.println("Worse");
      }

    }
  }
  ```
    