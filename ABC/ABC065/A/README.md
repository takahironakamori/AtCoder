### ABC065

# A - Expired?

  [問題はこちら](https://atcoder.jp/contests/abc065/tasks/abc065_a)


- 発想<br>
  A が B 以上ならば delicious 、<br>
  そうでないとき、 B - A が X 以下であれば、safe 、<br>
  上記以外の場合は、dangerous を出力する。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int X, A, B;
    cin >> X >> A >> B;

    if (0 <= A - B) {
      cout << "delicious" << endl;
    } else if (B - A <= X) {
      cout << "safe" << endl;
    } else {
      cout << "dangerous" << endl;
    }

  }
  ```

- コード（Java）

  ```java
  import java.util.*;
  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int X = sc.nextInt();
      int A = sc.nextInt();
      int B = sc.nextInt();

      if (B <= A) {
        System.out.println("delicious");
      } else if ((B - A) <= X) {
        System.out.println("safe");
      } else {
        System.out.println("dangerous");
      }

    }
  }
  ```
    