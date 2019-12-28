### ABC005

# A - おいしいたこ焼きの作り方

  [問題はこちら](https://atcoder.jp/contests/abc005/tasks/abc005_1)


- 発想<br>
  y / x を出力する<br>


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int x, y;
    cin >> x >> y;

    cout << y / x << endl;

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
      System.out.println(y/x);
    }
  }
  ```
    