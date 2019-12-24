### ABC054

# A - One Card Poker

  [問題はこちら](https://atcoder.jp/contests/abc054/tasks/abc054_a)

- 発想<br>
  A または B が 1 の場合は 14 にして、A と B の大小比較すると楽。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int A, B;
    cin >> A >> B;

    if (A == 1) {
      A = 14;
    }

    if (B == 1) {
      B = 14;
    }

    if (A == B) {
      cout << "Draw" << endl;
    } else if (A < B){
      cout << "Bob" << endl;
    } else {
      cout << "Alice" << endl;
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

      if (A == 1) {
        A = 14;
      }

      if (B == 1) {
        B = 14;
      }

      if (A == B) {
        System.out.println("Draw");
      } else if (A < B) {
        System.out.println("Bob");
      } else {
        System.out.println("Alice");
      }

    }
  }
  ```
    