### ABC020

# A - クイズ

  [問題はこちら](https://atcoder.jp/contests/abc020/tasks/abc020_a)

- 発想<br>
  Q が 1 のときに、ABC を出力し、<br>
  Q が 2 のときに、chokudai を出力する。

  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int Q;
    cin >> Q;

    if (Q == 1) {
      cout << "ABC" << endl;
    } else {
      cout << "chokudai" << endl;
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);

      int Q = sc.nextInt();

      if (Q == 1){
        System.out.println("ABC");
      } else {
        System.out.println("chokudai");
      }

    }
  }
  ```
    