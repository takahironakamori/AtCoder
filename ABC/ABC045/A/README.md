### ABC045

# A - 台形 / Trapezoids

  [問題はこちら](https://atcoder.jp/contests/abc045/tasks/abc045_a)


- 発想<br>
  台形の面積を求める。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int a, b, h;
    cin >> a >> b >> h;

    cout << (a + b) * h / 2 << endl;

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
      int h = sc.nextInt();

      System.out.println((a + b) * h / 2);

    }
  }
  ```
    