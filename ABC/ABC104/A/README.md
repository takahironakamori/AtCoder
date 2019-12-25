### ABC104

# A - Rated for Me

  [問題はこちら](https://atcoder.jp/contests/abc104/tasks/abc104_a)

- 発想<br>
  R が 1200 未満であれば ABC<br>
  R が 1200 以上 2800 未満であれば ARC <br>
  それ以外は、AGC を出力する。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int R;
    cin >> R;

    if (R < 1200) {
      cout << "ABC" << endl;
    } else if (1200 <= R && R < 2800) {
      cout << "ARC" << endl;
    } else {
      cout << "AGC" << endl;
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int R = sc.nextInt();

      if (R < 1200) {
        System.out.println("ABC");
      } else if (R < 2800) {
        System.out.println("ARC");
      } else {
        System.out.println("AGC");
      }

    }
  }
  ```
    