### ABC109

# A - ABC333

  [問題はこちら](https://atcoder.jp/contests/abc109/tasks/abc109_a)

- 発想<br>
  A * B が奇数だったら Yes <br>
  偶数だったら No
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int A, B;
    cin >> A >> B;

    if ((A * B) % 2 == 1) {
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
      int A = sc.nextInt();
      int B = sc.nextInt();

      if ((A * B) % 2 != 0) {
        System.out.println("Yes");
      } else {
        System.out.println("No");
      }

    }
  }
  ```
    