### ABC091

# A - Two Coins

  [問題はこちら](https://atcoder.jp/contests/abc091/tasks/abc091_a)


- 発想<br>
  A + B が C 以上であれば Yes<br>
  そうでなければ No を出力する。
  
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int A, B, C;
    cin >> A >> B >> C;

    if (C <= A + B) {
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
      int C = sc.nextInt();

      if (C <= A + B) {
        System.out.println("Yes");
      } else {
        System.out.println("No");
      }

    }
  }
  ```
    