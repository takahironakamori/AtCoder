### ABC037

# A - 饅頭

  [問題はこちら](https://atcoder.jp/contests/abc037/tasks/abc037_a)


- 発想<br>
  A と B で小さい方で C を割る。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int A, B, C;
    cin >> A >> B >> C;

    int answer = 0;

    if (A < B) {
      answer = C / A;
    } else {
      answer = C / B;
    }

    cout << answer << endl;

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
      int C = sc.nextInt();

      if (A < B) {
        System.out.println(C / A);
      } else {
        System.out.println(C / B);
      }

    }
  }
  ```
    