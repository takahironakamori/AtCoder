### ABC098

# A - Add Sub Mul

  [問題はこちら](https://atcoder.jp/contests/abc098/tasks/abc098_a)

- 発想<br>
  A + B と A - B と A * B の最大値を出力する。<br>
  max() をつかったり if 文を使う。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int A, B;
    cin >> A >> B;

    cout << max(A + B, max(A - B, A * B)) << endl;

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

      if ((A + B) <= (A - B)) {
        if ((A - B) <= (A * B)) {
          System.out.println(A * B);  
        } else {
          System.out.println(A - B);
        }
      } else {
        if ((A + B) <= (A * B)) {
          System.out.println(A * B);  
        } else {
          System.out.println(A + B);
        }
      }

    }
  }
  ```
    