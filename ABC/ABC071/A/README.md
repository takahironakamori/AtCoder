### ABC071

# A - Meal Delivery

  [問題はこちら](https://atcoder.jp/contests/abc071/tasks/abc071_a)


- 発想<br>
  絶対値を比較する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int x, a, b;
    cin >> x >> a >> b;

    if (abs(x - a) < abs(x - b)) {
      cout << "A" << endl;
    } else {
      cout << "B" << endl;
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
      int a = sc.nextInt();
      int b = sc.nextInt();

      if (Math.abs(x - a) < Math.abs(x - b)) {
        System.out.println("A");
      } else {
        System.out.println("B");
      }

    }
  }
  ```
    