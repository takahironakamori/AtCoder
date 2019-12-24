### ABC063

# A - Restricted

  [問題はこちら](https://atcoder.jp/contests/abc063/tasks/abc063_a)

- 発想<br>
  A + B が 10 以上ならば error を出力し、<br>
  そうでなければ、A + B を出力する。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int A, B;
    cin >> A >> B;

    if (A + B < 10) {
      cout << A + B << endl;
    } else {
      cout << "error" << endl;
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int A = sc.nextInt();
      int B = sc.nextInt();

      if ((A + B) < 10) {
        System.out.println(A + B);
      } else {
        System.out.println("error");
      }

    }
  }
  ```
    