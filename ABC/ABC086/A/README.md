### ABC086

# A - Product

  [問題はこちら](https://atcoder.jp/contests/abc086/tasks/abc086_a)

- 発想<br>
  a * b % 2 が 0 なら偶数<br>
  1 なら奇数
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int a, b;
    cin >> a >> b;

    if ((a * b) % 2 == 0) {
      cout << "Even" << endl;
    } else {
      cout << "Odd" << endl;
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
      if((a * b) % 2 == 0) {
        System.out.println("Even");
      } else {
        System.out.println("Odd");
      }
    }
  }
  ```
    