### ABC020

# B - 足し算

  [問題はこちら](https://atcoder.jp/contests/abc020/tasks/abc020_a)


- 発想<br>
  B < 10 のとき、(A * 10 + B) * 2<br>
  10 <= B かつ B <= 99 のとき、(A * 100 + B) * 2<br>
  それ以外のとき、(A * 1000 + B) * 2 を出力する。

  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int A, B;
    cin >> A >> B;

    int answer = 0;

    if (B < 10) {
      answer = (A * 10 + B) * 2;
    } else if (10 <= B && B <= 99) {
      answer = (A * 100 + B) * 2;
    } else {
      answer = (A * 1000 + B) * 2;
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

      int b = String.valueOf(B).length();
        int c = 1;

      for (int i = 0; i < b; i++) {
        c = c * 10;
      }

      System.out.println(((A * c) + B) * 2);

    }
  }
  ```
    