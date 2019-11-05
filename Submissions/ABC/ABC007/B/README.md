### ABC007

# B - 辞書式順序

  [問題はこちら](https://atcoder.jp/contests/abc007/tasks/abc007_2)

- 発想<br>
  辞書順で最も小さいのは a になるので、A が a 以外のときは a を出力し、<br>
  A が a のときは該当がないので、 -1 を出力する。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string A;
    cin >> A;

    if (A == "a") {
      cout << -1 << endl;
    } else {
      cout << "a" << endl;
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      String A = sc.next();

      if (A.equals("a")) {
        System.out.println("-1");
      } else {
        System.out.println("a");
      }

    }
  }
  ```
    