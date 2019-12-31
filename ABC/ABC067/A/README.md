### ABC067

# A - Sharing Cookies

  [問題はこちら](https://atcoder.jp/contests/abc067/tasks/abc067_a)


- 発想<br>
  A が 3 で割り切れる<br>
  B が 3 で割り切れる<br>
  A + B が 3 で割り切れる<br>
  上記のいずれかを満たせば、Possible を出力する。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int A, B;
    cin >> A >> B;

    if (A % 3 == 0 || B % 3 == 0 || (A + B) % 3 == 0) {
      cout << "Possible" << endl;
    } else {
      cout << "Impossible" << endl;
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

      if (((B + A) % 3 == 0) || ((A % 3) == 0) || ((B % 3) == 0)) {
        System.out.println("Possible");
      } else {
        System.out.println("Impossible");
      }

    }
  }
  ```
    