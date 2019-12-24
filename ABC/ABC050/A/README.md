### ABC050

# A - Addition and Subtraction Easy

  [問題はこちら](https://atcoder.jp/contests/abc050/tasks/abc050_a)

- 発想

  op が + の場合は A + B を、<br>
  - の場合は A - B を出力する
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int A;
    cin >> A;

    string op;
    cin >> op;

    int B;
    cin >> B;

    if (op == "+") {
      cout << A + B << endl;
    } else {
      cout << A - B << endl;
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
      String op = sc.next();
      int B = sc.nextInt();

      if (op.equals("+")) {
        System.out.println(A + B);
      } else {
        System.out.println(A - B);
      }

    }
  }
  ```
    