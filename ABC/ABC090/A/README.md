### ABC090

# A - Diagonal String

  [問題はこちら](https://atcoder.jp/contests/abc090/tasks/abc090_a)


- 発想<br>
  c11 と c22 と c23 をつなげて出力する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string c1, c2, c3;
    cin >> c1 >> c2 >> c3;

    cout << c1[0] << c2[1] << c3[2] << endl;

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      String c1 = sc.next();
      String c2 = sc.next();
      String c3 = sc.next();

      String c11 = c1.substring(0,1);
      String c22 = c2.substring(1,2);
      String c33 = c3.substring(2,3);

      System.out.println(c11 + c22 + c33);

    }
  }
  ```
    