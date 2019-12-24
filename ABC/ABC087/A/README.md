### ABC087

# A - Buying Sweets

  [問題はこちら](https://atcoder.jp/contests/abc087/tasks/abc087_a)


- 発想<br>
  (X - A) % B を出力する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int X, A, B;
    cin >> X >> A >> B;

    cout << ((X - A) % B) << endl;

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

      System.out.println((X-A) % B);

    }
  }
  ```
    