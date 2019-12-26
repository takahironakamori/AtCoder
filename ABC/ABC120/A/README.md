### ABC120

# A - Favorite Sound

  [問題はこちら](https://atcoder.jp/contests/abc120/tasks/abc120_a)

- 発想<br>
  C と B / A で小さい方を出力する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int A, B, C;
    cin >> A >> B >> C;

    cout << min(C, B / A) << endl;

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

      if ((B / A) < C) {
        System.out.println(B / A);
      } else {
        System.out.println(C);
      }

    }
  }
  ```
    