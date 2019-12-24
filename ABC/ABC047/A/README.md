### ABC047

# A - キャンディーと2人の子供 / Fighting over Candies

  [問題はこちら](https://atcoder.jp/contests/abc047/tasks/abc047_a)

- 発想
  Yesになるのは以下の3パターン
  a + b = c
  b + c = a
  a + c = b
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int a, b, c;
    cin >> a >> b >> c;

    if (a + b == c) {
      cout << "Yes" << endl;
    } else if (a + c == b) {
      cout << "Yes" << endl;
    } else if (b + c == a) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int a = sc.nextInt();
      int b = sc.nextInt();
      int c = sc.nextInt();

      if (((a + b) == c) || ((b + c) == a) || ((a + c) == b)) { 
        System.out.println("Yes");
      } else {
        System.out.println("No");
      }

    }
  }
  ```
    