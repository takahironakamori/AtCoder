### ABC106

# A - Garden

  [問題はこちら](https://atcoder.jp/contests/abc106/tasks/abc106_a)

- 発想<br>
  (A - 1) * (B - 1) を出力する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int A, B;
    cin >> A >> B;

    cout << ((A - 1) * (B - 1)) << endl;

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

      System.out.println(A * B - (A + B - 1));

    }
  }
  ```
    