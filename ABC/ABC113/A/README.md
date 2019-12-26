### ABC113

# A - Discount Fare

  [問題はこちら](https://atcoder.jp/contests/abc113/tasks/abc113_a)

- 発想<br>
  X + Y / 2 を出力する。<br>

  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int X, Y;
    cin >> X >> Y;

    cout << X + Y / 2 << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int X = sc.nextInt();
      int Y = sc.nextInt();

      System.out.println(X + (Y / 2));

    }
  }
  ```
    