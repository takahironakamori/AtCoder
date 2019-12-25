### ABC112

# A - Programming Education

  [問題はこちら](https://atcoder.jp/contests/abc112/tasks/abc112_a)

- 発想<br>
  N が 1 のときは Hello World を、<br>
  2 のときは A + B を出力する。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    if (N == 2) {
      int A, B;
      cin >> A >> B;
      cout << A + B << endl;
    } else {
      cout << "Hello World" << endl;
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int N = sc.nextInt();

      if (N == 2) {
        int A = sc.nextInt();
        int B = sc.nextInt();
        System.out.println(A + B);
      } else {
        System.out.println("Hello World");
      }

      sc.close();

    }
  }
  ```
    