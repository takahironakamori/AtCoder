### ABC057

# A - Remaining Time

  [問題はこちら](https://atcoder.jp/contests/abc057/tasks/abc057_a)


- 発想<br>
  A + B が 24以上の場合は、A + B から 24 引く<br>
  そうでない場合は A + B を出猟kする<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int A, B;
    cin >> A >> B;

    if (A + B < 24) {
      cout << A + B << endl;
    } else {
      cout << A + B - 24 << endl;
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

      int start = A + B;

      if (24 <= start) {
        start = start - 24;
      }

      System.out.println(start);

    }
  }
  ```
    